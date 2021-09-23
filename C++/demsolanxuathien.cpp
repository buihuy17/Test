#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n + 10];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int dem = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == k)
            {
                dem++;
            }
        }
        if (dem == 0)
            cout << "-1";
        else
            cout << dem;
            cout<< endl;
    }
    return 0;
}