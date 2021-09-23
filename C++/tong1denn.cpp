#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n, m, sum;
        cin >> n;
        sum = 0;
        for (int i = 0; i <= n; i++)
        {
            sum += i;
        }
        cout << sum << endl;
    }
}