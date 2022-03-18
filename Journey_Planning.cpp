#include <bits/stdc++.h>
#define int long long
using namespace std;

map<int, int> mp;

main()
{
	int n;
	int ans=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		int x;
		cin>>x;
		mp[x-i]+=x;
		ans=max(ans, mp[x-i]);
	}
	cout<<ans;
}
