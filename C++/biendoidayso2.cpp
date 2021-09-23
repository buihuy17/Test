#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 10];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll b[100000];
        int k = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (i == 1)
                b[k] = a[i] * a[i + 1];
            else if (i == n)
            {
                k=n;
                b[k] = a[i] * a[i - 1];
            }
            else
            {
                b[k] = a[i - 1] * a[i + 1];
            }
            k++;
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}