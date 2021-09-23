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
    return a + b;
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        long long a = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            a = (a * i) / ucln(a, i);
        }
        cout << a << endl;
    }
    return 0;
}