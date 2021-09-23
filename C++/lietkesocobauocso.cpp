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
        int a;
        cin >> a;
        for (long long i = 1; i <= sqrt(a); i++)
        {
            if (Nto[i] == 1)
                cout << i*i << "  ";
        }
        cout << endl;
    }
    return 0;
}