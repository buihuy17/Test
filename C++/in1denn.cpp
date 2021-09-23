#define ll long long
#include <bits/stdc++.h>
using namespace std;
int sochan(int a)
{
    if (a < 5)
        return 0;
    return 1;
}

main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sochan(i);
        cout << i << " ";
    }
}