#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, Q;
        cin >> n >> Q;
        long long a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        while (Q--)
        {
            int L, R;
            cin >> L >> R;
            int sum = 0;
            for (int i = L; i <= R; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
        cout << endl;
    }
    return 0;
}