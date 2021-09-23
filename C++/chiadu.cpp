#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, m;
        cin >> a >> m;
        int ok = 0;
        for (int i = 0; i <= m ; i++)
        {
            if ((a * i) % m == 1){
                cout << i;
            ok = 1;
            break;
            }
        }
        if (ok == 0)
            cout << "-1";
        cout << endl;
    }
    return 0;
}