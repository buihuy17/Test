#define ll long long
#include <bits/stdc++.h>
using namespace std;
int Nto[1000000];
void Sang()
{
    for (long long i = 0; i < 100000; i++)
        Nto[i] = 1;
    Nto[0] = Nto[1] = 0;
    for (long long i = 2; i <= 1000; i++)
    {
        if (Nto[i] == 1)
        {
            for (long long j = i * i; j < 1000000; j += i)
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
        long long a;
        cin >> a;
        long long dem = 0;
        for (long long i = 1; i <= sqrt(a); i++)
        {
            if (Nto[i] == 1)
            {
                dem += 1;
            }
        }
        cout << dem;
        cout << endl;
    }
    return 0;
}