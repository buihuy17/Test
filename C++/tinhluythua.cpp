#define ll long long
#include <bits/stdc++.h>
using namespace std;
long long dequy(long long x, long long y, long long p)
{
    if (y <= 1)
        return x;
    long long t = dequy(x, y / 2, p);
    if (y % 2 == 0)
        return ((t % p) * t) % p;
    return (((t % p) * t) % p * x) % p;
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long x, y, p;
        cin >> x >> y >> p;
        cout << dequy(x, y, p);
        cout << endl;
    }
    return 0;
}