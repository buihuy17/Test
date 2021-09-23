#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n;
void solve()
{
	cin>>n;
	int count = 0;
	for(int i=2 ; i<=sqrt(n) ; i++)
	{
		if(n%i == 0)
		{
			count++;
			int dem = 0;
			while(n%i == 0)
			{
				dem++;
				n/=i;
			}
			if(dem > 1) // co nhieu uoc giong nhau
			{
				cout<<0<<endl;
				return;
			}
		}
	}
	if(n>1)	count++;
	if(count == 3)	cout<<1<<endl;
	else cout<<0<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

