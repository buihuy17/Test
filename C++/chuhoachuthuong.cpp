#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char a;
        cin >> a;
        if (a > 96)
            a -= 32;
        else
            a += 32;
        cout << a;
        cout << endl;
    }
}