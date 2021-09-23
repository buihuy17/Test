#define ll long long
#include <bits/stdc++.h>
using namespace std;
int Nto(int x)
{
    if (x = 1)
        return 0;
    else
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
                return 0;
        }
    return 1;
}

void uoc(int a)
{
    for (int b = 1; b <= a; b++)
    {
        if (a % b == 0)
        {
            if (Nto(b) == 1)
            {
                cout << b;
                break;
            }
        }
    }
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            cout << 1 << " ";
            uoc(i);
        }
        cout << endl;
    }
}