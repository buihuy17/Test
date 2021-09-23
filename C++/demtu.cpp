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
        int dem = 0;
        string s;
        getline(cin, s);
        stringstream p(s);
        string tmp;
        while (p >> tmp)
        {
            dem++;
        }
        cout << dem;
        cout << endl;
    }
    return 0;
}