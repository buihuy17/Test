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
        int a[n + 10];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] > a[i - 2])
                    swap(a[i], a[i - 2]);
            }
            else
            {
                if (a[i] < a[i - 2])
                    swap(a[i], a[i - 2]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}