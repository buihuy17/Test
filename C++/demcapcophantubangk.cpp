#include<math.h>	
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int p=0;
		int a[n];
		for(int i=0;i<n;i++){
			int m;
			cin >> m;
			if(m<=k) a[p++]=m;
		}
		n=p;
		p=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]<k) break;
				if(a[i]+a[j]==k) p++;
			}
		}
		cout << p << endl;
	}
}