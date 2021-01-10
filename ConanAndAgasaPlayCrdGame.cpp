#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
	map<int,int> mp;
	bool f=false;
	for(int i=0;i<n;++i)
	{
		int x;cin>>x;
		mp[x]++;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second%2!=0)
		{
			f=true;break;
		}
	}
	if(f==true)cout<<"Conan";
	else
        cout<<"Agasa";
	return 0;
}
