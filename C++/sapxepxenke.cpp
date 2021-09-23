#define ll long long
#include<bits/stdc++.h>
using namespace std;
//code by BuiHuy
main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n+10];
        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++) {
            for(int j=i+1;j<=n;j++) {
                if(a[i]<a[j]) swap(a[i],a[j]);
            }
        }
        for(int i=1;i<=(n+1)/2;i++) {
            cout<<a[i]<<" ";
            if(i != n+1-i)  cout << a[n+1-i]<<" ";
        }
        cout<<endl;
    }
     return 0;
}