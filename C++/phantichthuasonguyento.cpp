#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            int dem = 0;
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    dem += 1;
                    n /= i;
                }
                cout << i << " " << dem << " ";
            }
        }
        if (n > 1)
            cout << n <<" "<< "1" ;
        cout << endl;
    }
    return 0;
}