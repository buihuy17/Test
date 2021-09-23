#define ll long long
#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k,m;
        cin>>n>>m;
        int a[n+10][n+10];
        int b[10000];
        k=1;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                cin>>a[i][j];
                b[k++]=a[i][j];
            }
        }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                b[k]=a[i][j];
            }
        }
        for(int i=1;i<=k;i++) {
            for(int j=i+1;j<=k;j++) {
                if(b[i]>b[j]) swap(b[i],b[j]);
            }
        }
        for(int i=1;i<k;i++){
           cout<<b[m];
           break;
        }
        cout<<endl;
    }
    return 0;
}