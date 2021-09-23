#define ll long long
#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n,s1=0;
		cin>>n;
		long long b[n+5],c[n+5];
		for(int i=0;i<n;i++) 
		{
			cin>>b[i];
			if(b[i]!=0)
			{
				c[s1]=b[i];
				s1++;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(i<s1) cout<<c[i]<<" ";
			else cout<<"0 ";
		}
		cout<<endl;

    }
}