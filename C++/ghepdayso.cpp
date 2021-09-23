#define ll long long
#include <bits/stdc++.h>
using namespace std;
int k;
void mangB (int a[10][10], int n, int m, int b[100])
{
    int k = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }
}


main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 5][m + 5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int k=0;
        int b[10000];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                b[k] = a[i][j];
                k++;
            }
        }
        for (int i = 0; i < (m*n); i++)
        {
            for (int j = i+1; j < (m*n); j++)
            {
                if (b[i] > b[j])
                swap(b[i],b[j]);
            }
        }
       for(int i=0; i<(m*n); i++){
           cout<<b[i]<<" ";
       }
        cout<<endl;
    }
    return 0;
}