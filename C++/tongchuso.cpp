#define ll long long
#include <bits/stdc++.h>
using namespace std;
int Tong(int a)
{
    int b = 0;
    while (a > 0)
    {
        b += a % 10;
        a /= 10;
    }
    if(b>9)     return Tong(b);
    return b;
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        int sum = 0;
        while (n != 0)
        {
            sum += (n % 10);
            n /= 10;
        }
        if (sum > 9)
        {
            cout<<Tong(sum);
        }
        else
            cout << sum;
        cout << endl;
    }
}