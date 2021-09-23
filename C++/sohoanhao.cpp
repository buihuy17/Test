#include<iostream>
using namespace std;
bool check(int n){
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; // tra ve true
    return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
    cin>>n;
    if(check(n) )
        cout<<"1";
    else
        cout<<n<<"0";
	}
    return 0;
}