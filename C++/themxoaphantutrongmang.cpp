#define ll long long
#include<bits/stdc++.h>
using namespace std;
void ThemMotPhanTu(ll n,ll a[],ll x,ll y){
    //x la vi tri chen, y la gia tri can chen
    if(x>=0 && x<=n){
        for(ll i=n+1;i>=x;i--){
            a[i]=a[i-1];
            a[x]=y;
            n++;
        }
    }
}
void XoaMotPhanTu(ll n,ll a[],ll x){
    //x la vi tri cua phan tu can xoa
    if(x>=0 && x<=n){
        for(int i=x;i<=n-1;i++){
            a[i]=a[i+1];
            n--;
        }
    }
}
void NhapMang(ll n,ll a[]){
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
}
void XuatMang(ll n,ll a[]){
    for(int i=1;i<=n;i++) {
        cout<<a[i]<<" ";
    }
}
main() {
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n+10];
    NhapMang(n,a);
    ThemMotPhanTu( n, a, x, y);
    XuatMang( n, a);
    return 0;
}