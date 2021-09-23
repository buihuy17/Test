#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10000];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ok = 0;
        for (int i = 2; i <= n; i++)
        {
            for (int j = i - 1; j >= 1; j--)
            {
                if (a[i] == a[j])
                {
                    cout << a[i] << endl;
                    ok = 1;
                    break;
                }
            }
            if (ok == 1)
                break;
        }
        if (ok == 0)
            cout << "-1" << endl;
    }
    cout << endl;
    return 0;
}