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
        long long dao = 0;
        long long m = n;
        while (m > 0)
        {
            dao = dao * 10 + m % 10;
            m /= 10;
        }
        if (dao == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}