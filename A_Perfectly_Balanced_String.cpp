#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s; 
		cin>>s;
		set<char> c;
		int i=0;
		for(i=0; i<s.size(); i++)
		{
			if(c.count(s[i]) == 0)
			c.insert(s[i]);
			else
			break;
		}
		bool f=true;
		for(int j = i; j<s.size(); j++)
		{
			if(s[j]!=s[j-i])
			{
				f=false;
				break;
			}
		}
		if(f==false)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
}
