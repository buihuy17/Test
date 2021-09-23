#define ll long long
#include <bits/stdc++.h>
using namespace std;
int chanle(long a);

int chanle(long a)
{
    int c = 0;
    int l = 0;
    while (a)
    {
        int m = a % 10;
        a /= 10;
        if (m % 2)
            l++;
        else
            c++;
    }
    if (c == l)
        return 1;
    return 0;
}

main()
{
    int n;
    cin >> n;
    int b = 1;
    int dem = 0;
    while (n--)
    {
        b *= 10;
    }
    for (int i = b/10; i <= b; i++)
    {
        if (chanle(i) == 1)
        {
            dem++;
            cout << i << " ";
        }
        if (dem == 10)
        {
            dem = 0;
            cout << endl;
        }
    }
    return 0;
}