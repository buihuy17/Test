#define ll long long
#include <bits/stdc++.h>
using namespace std;
void    XepVao(ll n,ll b[]){
    ll k=0;
    while (n != 0)
    {
        ll a = n % 10;
        b[k++] = a;
        n /= 10;
    }
}
void XoaTrung(ll n,ll b[]){
    ll i,j,x;
    for(i=0; i<n; i++){
        while(j<n){
            if(b[i]==b[j]){
                for(x=j;x<(n-1);x++)
                b[x]=b[x+1];
                n=n-1;
            }
            else j=j+1;
        }
    }
}

main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n+10];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
    }
    
}