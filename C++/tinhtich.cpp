#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n + 10], b[m + 10];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        ll max = a[1];
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        ll min = b[1];
        for (int i = 1; i <= m; i++)
        {
            if (b[i] < min)
                min = b[i];
        }
        cout << max * min;
        cout << endl;
    }
    return 0;
}