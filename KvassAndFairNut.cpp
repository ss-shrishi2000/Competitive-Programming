#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,k=0,sum=0;
    int n;cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	long long int m=*min_element(a,a+n);
	long long ans=sum-s;
	if(ans>=0)
	{
		cout<<min(ans/n,m);
	}
	else
		cout<<"-1";

	return 0;
}
