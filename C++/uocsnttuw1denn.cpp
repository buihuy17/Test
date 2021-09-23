#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }
        if (n > 1)
                cout << n ;
                cout << endl;
    }
    return 0;
}