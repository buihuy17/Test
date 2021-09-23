#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[10000];
    ll k = 0;
    for (int i = 0; i < n; i++)
    {
        while (a[i] != 0)
        {
            ll y = a[i] % 10;
            b[k++] = y;
            n /= 10;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << b[i] << " ";
    }
}