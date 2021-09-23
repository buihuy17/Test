#define ll long long
#include <bits/stdc++.h>
using namespace std;
 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 10];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll min=abs(a[0]+a[1]),sum,h,k;
        for (ll i = 0; i < n; i++){
           for(int j=i+1; j<n; j++){
           	sum=abs(a[i]+a[j]);
           	if(min>sum){
           		min=sum;
           		h=i; k=j;
           	} 
           }
        }
        cout<<a[h]+a[k];
        cout<<endl;
    }
    return 0;
}
