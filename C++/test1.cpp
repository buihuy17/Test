#define ll long long
#include <bits/stdc++.h>
using namespace std;
main()
{

    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        int dem = 0;
        string s;
        getline(cin,s);
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == 32 && s[i - 1] != 32)
                dem++;
            if (s[0] == 32)
                dem--;
            if (s[s.length() - 1] == 32)
                dem--;
        }
        cout << dem + 1;
        cout << endl;
    }
}