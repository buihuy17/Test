#define ll long long
#include <bits/stdc++.h>
using namespace std;
void NhapMang(ll n, ll a[]){
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
}

void XuatMang(ll n,ll a[]){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}

void NoiMang(ll n, ll a[],ll m,ll b[],ll c[],ll x){
    for (int i = 1; i <= n; i++)
    {
            c[i] = a[i];
    }
    int k=0;
    for(int i=n+1;i<=x;i++){
    	c[i] = b[++k];
	}
}

main()
{
    ll n, m;
    cin >> n >> m;
     ll a[10000], b[100000], c[10000];
    int d=n+m;
    NhapMang(n,a);
    NhapMang(m,b);
    NoiMang(n,a,m,b,c,d);
    XuatMang(d,c);
	return 0;
}