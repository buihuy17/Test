#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n<3&&n!=0) cout << 1 << endl;
		else{
			long long x=1, y=1;
			for(int i=3;i<=n;i++){
				long long tmp=x;
				x=x+y;
				y=tmp;
			}
			cout << x << endl;
		}
	}
}