#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = k; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}