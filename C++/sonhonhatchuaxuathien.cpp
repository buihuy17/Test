#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n ;
		long a[n];
		long k=0;
		for(long i=0;i<n;i++){
			long m;
			cin >> m;
			if(m>0)
			a[k++]=m;
		}
		n=k;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					long tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		if(a[0]!=1) cout << 1 << endl;
		else
		for(int i=0;i<n;i++){
			if(a[i+1]-a[i]>1||i==n-1){
				cout << a[i]+1 << endl;
				break;
			}
		}
	}
}