#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 10];
        int ok = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == x){
                cout << i;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << "-1";
        cout << endl;
    }
}