#define ll long long
#include <bits/stdc++.h>
using namespace std;
int Nto[1000000];
void Sang()
{
    for (int i = 0; i < 1000000; i++)
        Nto[i] = 1;
    Nto[0] = Nto[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (Nto[i] == 1)
        {
            for (int j = i * i; j < 1000000; j += i)
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
        int ok=0;
        for (int i = 2; i <= (a / 2); i++)
        {
            int sum = 0;
            if (Nto[i] && Nto[a - i])
            {
                cout << i << "  " << (a - i);
                ok=1;
                break;
            }
        }
        if(ok==0)   cout<<"-1";
        cout << endl;
    }
    return 0;
}