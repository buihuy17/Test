#define ll long long
#include <bits/stdc++.h>
using namespace std;
main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        ll sum = 0;
        ll n = s.length();
        for (int i = 0; i < n; i++)
        {
            s[i]-=48;
            if(i%2==0)  sum+=s[i];
            else sum-=s[i];
        }
        if (sum % 11 == 0)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}