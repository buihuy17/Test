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
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i + 1; j <= n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
        int dem = 0;
        for (ll i = 2; i <= n; i++)
        {
            if(a[1]<a[i])  {
                cout<<a[1]<<" "<<a[i];
                dem =1;
                break;
            }
        }
        if (dem == 0)
            cout << "-1";
             cout << endl;
    }
     return 0;
}