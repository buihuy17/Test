#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 10];
        int min;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        min = a[n-1] - a[n-2];
        for(int i=(n-2); i >0; i--){
            int x = a[i] - a[i - 1];
            if (x < min)
             min = x;
        }
        cout << min << endl;
    }
}