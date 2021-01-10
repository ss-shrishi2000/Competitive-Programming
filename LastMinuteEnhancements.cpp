#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x,r=0;cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
		cin>>x;
		if(mp[x]==0)
        {
			mp[x]++;r++;
		}
		else if(mp[x+1]==0)
		{
			mp[x+1]++;r++;
		}
	   }
       cout<<r<<endl;
    }
}
