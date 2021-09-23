#define ll long long
#include <bits/stdc++.h>
using namespace std;
int snt(int a)
{
    if (a < 2)
        return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (snt(i) == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}