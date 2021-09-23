#define ll long long
#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, tachso;
        int dem1 = 0;
        int dem = 0;
        cin >> n;
        int e = n;
        while (e != 0)
        {
            e /= 10;
            dem1 = dem1 + 1;
        }
        while (n != 0)
        {
            tachso = n % 10;
            if (tachso == 6 || tachso == 0 || tachso == 8)
            {
                dem = dem + 1;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
            n /= 10;
        }
        if (dem == dem1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}