#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
	cin>>T;
	while(T--)
	{
	    int n;
		cin>>n;
		string s;
		cin>>s;
		cin>>n;
		map<char,bool> mp;
		for(int i=1;i<=n;i++)
		{
			string c;
			cin>>c;
			mp[c[0]]=1;
		}
		int pre=0;
		int res=0;
		for(int i=0;i<s.length();i++)
		{
			char c=s[i];
			if(mp[c])
			{
				res=max(res,i-pre);
				pre=i;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
