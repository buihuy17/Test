#define ll long long
#include <bits/stdc++.h>
using namespace std;
long long Giaithua(long long n)
{
    long long tich = 1;
    long long tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tich *= i;
        tong += tich;
    }
    return tong;
}

main()
{
    long long n;
    cin >> n;
    cout<<Giaithua(n);
}