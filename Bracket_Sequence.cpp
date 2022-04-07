#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    stack<int> opening,closing;
	string s,ans="";
	cin>>n>>k>>s;
	if(k==n)
    {
    cout<<s;
    return 0;
	}
	for(i=0;i<n;i++)
	{
		if(s[i]=='(' && opening <k/2)
		{
			ans+='(';
			opening++;
		}
		if(s[i]==')' && closing <k/2)
		{
			ans+=')';
			closing++;
		}
	}
	cout<<ans;
    return 0;
}
