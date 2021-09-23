#define ll long long
#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b)
{
    long long c;
    while (b != 0)
    {
     c = a % b;
        a = b;
        b = c;
    }
    return a;
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long x, y, z;
        long long LCM;
        cin >> x >> y;
        long long u = x, v = y;
        z = ucln(x, y);
        LCM = (u * v) / z;
        cout << LCM << " " << z << endl;
    }
    return 0;
}