#include<iostream>
using namespace std;
int a[1000000],b[1000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,dem=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=0;
		}
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]==a[j]){
					b[i]=1;
					b[j]=1;
				}
			}
		}
		for(int i=1;i<=n;i++){
			if(b[i]==1) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}