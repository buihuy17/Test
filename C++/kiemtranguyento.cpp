#define ll long long
#include <bits/stdc++.h>
using namespace std;
long long Nto(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

main()
{
    int n;
    cin >> n;
    if (Nto(n) == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}