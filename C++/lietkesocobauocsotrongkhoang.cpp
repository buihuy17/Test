#define ll long long
#include <bits/stdc++.h>
using namespace std;
int Nto[10000000];
void Sang()
{
    for (int i = 0; i < 10000; i++)
        Nto[i] = 1;
    Nto[0] = Nto[1] = 0;
    for (int i = 2; i <= 100; i++)
    {
        if (Nto[i] == 1)
        {
            for (int j = i * i; j < 10000; j += i)
            {
                Nto[j] = 0;
            }
        }
    }
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Sang();
        ll a, b;
        cin >> a >> b;
        ll dem = 0;
        for (long long i = a; i <= sqrt(b); i++)
        {
            if (Nto[i] == 1)
                dem++;
        }
        cout << dem;
        cout << endl;
    }
    return 0;
}