#define ll long long
#include<bits/stdc++.h>
using namespace std;
/*
    tao mot mang b co phan tu ban dau bang 0'
    duyet toan bo mang a;
    neu 0 <= a[i]  < n thi b[a[i]] = 1;
    duyet toan bo mang b , neu b[i] = 1 thi in ra i , nguoc lai in ra -1;
*/

int n;
void sxdayso()
{
	cin>>n;
	ll a[n+3];
	ll b[n+3];
	for(int i=0 ; i<n ; i++)
	{
		cin>>a[i];
		b[i] = 0;
	}
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] >= 0 && a[i] < n)
		{
			b[a[i]] = 1;
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		if(b[i] == 1)	cout<<i<<" ";
		else cout<<-1<<" ";
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		sxdayso();
	}
    return 0;
}