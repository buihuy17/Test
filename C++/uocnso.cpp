#define ll long long
#include <bits/stdc++.h>
using namespace std;
long long GCD(long long x, long long y)
{
    long long t;
    while (y != 0)
    {
        t = x % y;
        x = y;
        y = t;
    }
    return x;
}

long long LCM(long long x, long long y)
{
    long long bcnn;
    bcnn = (x * y) / (GCD(x, y));
    return bcnn;
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n, m;
        cin >> n;
        m = 1;
        for (int i = 1; i <= n; i++)
        {
            m = long long LCM(m, i);
        }
        cout << m << endl;
    }
}