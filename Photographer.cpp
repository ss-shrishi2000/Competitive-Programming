#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,d,a,b,x,y;cin>>n>>d>>a>>b;
	vector<pair<int,int>> vec;
	vector<int> ans;
	for(int i=0;i<n;i++)
    {
		cin>>x>>y;
		vec.push_back(make_pair(a*x+b*y,i+1));
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size() and d>=vec[i].first;i++)
	{
		ans.push_back(vec[i].second);
		d-=vec[i].first;
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
    {
		cout<<ans[i]<<" ";
	}
	return 0;
}
