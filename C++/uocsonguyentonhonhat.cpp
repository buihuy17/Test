#define ll long long
#include <bits/stdc++.h>
using namespace std;
int Nto(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

void uoc(int a)
{
    for (int b = 2; b <= a; b++)
    {
        if (a % b == 0)
        {
            if (Nto(b) == 1)
            {
                cout << b<<" ";
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
        cout << 1 << " ";
        for (int i = 1; i <= x; i++)
        {
            uoc(i);
        }
        cout << endl;
    }
    return 0;
}