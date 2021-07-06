#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
	cin>>n>>m;
	vector<pair<int,int> > v;
	int ans[n]={0};
	while(m--)
	{
		int t,r,l;
		cin>>t>>l>>r;
		if(t)
		{
			for(i=l;i<r;i++)
			ans[i]=1;
		}
		else
		v.push_back({l,r});
	}
	for(i=0;i<v.size();i++)
	{
		bool res=0;
		for(j=v[i].first;j<v[i].second;j++)
		{
		    //cout<<j<<" ";
			if(!ans[j])
			res=1;
		}
		if(!res)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	int x=1000000;
	cout<<"YES"<<endl;
	cout<<x<<" ";
	for(i=1;i<n;i++)
	{
		if(!ans[i])
		x--;
		cout<<x<<" ";
	}
	return 0;
}
