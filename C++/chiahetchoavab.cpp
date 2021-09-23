#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int dem = 0;
        for (int i = m; i <= n; i++)
        {
            if ((i % a) == 0)
                dem++;
            else if ((i % b) == 0)
                dem++;
            else if ((i % a) == 0 && (i % b) == 0)
                dem--;
        }
        cout << dem;
        cout << endl;
    }
    return 0;
}