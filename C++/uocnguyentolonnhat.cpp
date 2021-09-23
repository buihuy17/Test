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
        for (long long i = 2; i <= sqrt(n); i++)
        {
            while (n % i == 0)
            {
                n /= i;
                if (n == 1)
                    cout << i;
            }
        }
        if (n > 1)
            cout << n;
        cout << endl;
    }
    return 0;
}