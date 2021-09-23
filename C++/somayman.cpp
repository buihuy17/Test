#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        if (n % 100 == 86)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}