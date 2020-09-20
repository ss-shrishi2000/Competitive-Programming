#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<pair<lli,lli>> v;
int main()
{
	lli n,i;cin>>n;
	lli a[n],b[n],ans[n];
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;i++)
	{
		cin>>b[i];
		v.push_back({b[i],i});
	}
	sort(v.begin(),v.end());
	sort(a,a+n);
	reverse(a,a+n);
	for(i=0;i<n;i++)ans[v[i].second] = a[i];
	for(i=0;i<n;i++)cout<<ans[i]<<" ";
}
