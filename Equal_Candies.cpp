#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; 
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		    cin>>a[i];
		    
		sort(a,a+n);
		int diff = 0;
		int mid = a[0];
		for(int i=0; i<n; i++)
		{
			diff+= abs(a[i]-mid);
		}
		cout<<diff<<endl;
	}
	return 0;
}
