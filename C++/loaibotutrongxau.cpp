#define ll long long
#include <bits/stdc++.h>
using namespace std;

main()
{
   string a;
   string b;
   getline(cin, a);
   getline(cin, b);
   stringstream p(a);
   string check[10000];
   string trunggian;
   int dem = 0;
   while (p >> trunggian)
   {
      check[dem++] = trunggian;
   }
   for (int i = 0; i < dem; i++)
   {
      if (check[i] != b)
         cout << check[i] << " ";
   }
   cout << endl;
   return 0;
}