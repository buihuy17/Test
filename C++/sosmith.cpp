#define ll long long
#include <bits/stdc++.h>
using namespace std;
long tongchuso(long);
long tonguocso(long);

long tongchuso(long x)
{
    long a = 0;
    while (x)
    {
        a += x % 10;
        x = x / 10;
    }
    return a;
}

long tonguocso(long x)
{
    long b = 0;
    for (long i = 2; 1 < x; i++)
    {
        if (x % i == 0)
        {
            if (i >= 11)
            {
                b += tongchuso(i);
            }
            else
                b += i;
            x /= i--;
        }
    }
    return b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long x;
        cin >> x;
        long a = tongchuso(x);
        long b = tonguocso(x);
        if (a == b)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}