#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int min=0, max=0;
		int dem=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]>max) max=a[i];
			if(a[i]<min||min==0) min=a[i];
		}
		for(int k=min+1;k<max;k++){
			for(int i=0;i<n;i++){
				if(a[i]==k) break;
				if(i==n-1) dem++;
			}
		}
		cout << dem << endl;
	}
}