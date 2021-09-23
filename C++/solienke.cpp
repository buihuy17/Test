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
        int dem = 0, l = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            int k = abs((int)s[i] - (int)s[i + 1]);
            if (k != 1)
            {
                cout << "NO" << endl;
                l = 1;
                break;
            }
            else
                dem++;
        }
        if (l == 1)
            continue;
        if (dem == s.length() - 1)
            cout << "YES" << endl;
    }
    return 0;
}