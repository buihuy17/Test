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
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int max = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        cout << max;
        cout << endl;
    }
    return 0;
}