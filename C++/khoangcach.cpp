#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double m;
        m = sqrt((a - c) * (a - c) + (d - b) * (d - b));
        printf("%.4lf",m);
        cout << endl;
    }
}