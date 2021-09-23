#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		n--;
		long a[n];
		int d=0;
		for(long i=0;i<n;i++){
			cin >> a[i];
			if(a[i]!=i+1&&d==0){
				d=i+1;
			}
		}
		cout << d << endl;
	}
}