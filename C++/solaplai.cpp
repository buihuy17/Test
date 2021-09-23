#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a, x, y;
void solve()
{
    cin >> a >> x >> y;
    for (int i = 0; i < __gcd(x, y); i++)
    {
        cout << a;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
