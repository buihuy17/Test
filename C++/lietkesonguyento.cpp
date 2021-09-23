#define ll long long
#include <bits/stdc++.h>
using namespace std;
int Nto[1000000];
void Sang()
{
    for (int i = 0; i < 1000; i++)
        Nto[i] = 1;
    Nto[0] = Nto[1] = 0;
    for (int i = 2; i <= 100; i++)
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
        Sang();
        int a, b;
        cin >> a >> b;
        if(a>b){
            int t=a;
            a=b;
            b=t;
        }
        for (int i = a; i <= b; i++)
        {
            if (Nto[i] == 1)
                cout << i << " ";
        }
    return 0;
}