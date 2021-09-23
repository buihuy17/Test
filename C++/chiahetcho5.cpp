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
        for (int i = n-1; i >=0; i--)
        {
            s[i]-=48;
            sum+=s[i]*pow(2,i);
        }
        if (sum % 5 == 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}