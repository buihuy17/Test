#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long sum = 0;
        for (long long i = 1; i <= n; i++)
        {
            sum += (i % k);
        }
        if (sum == k)
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
    return 0;
}