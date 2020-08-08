#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,j;
	cin>>t;
	while(t--) {
		cin>>n;
		int x,y;
		map<int,int>mp;
		for(i = 0; i < n; i++) {
			cin>>x>>y;
			mp[x]++;
			mp[y]--;
		}
		int maxi = -1;
		int ans = 0;
		for(map<int,int>::iterator it = mp.begin(); it != mp.end(); it++) {
			ans += it->second;
			maxi = max(maxi,ans);
		}
		cout<<maxi<<endl;
	}
	return 0;
}
