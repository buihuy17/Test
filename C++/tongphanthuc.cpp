#define ll long long
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    double n;
    cin >> n;
    double tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += 1.0/i;
    }
    printf("%.4lf", tong);
}
