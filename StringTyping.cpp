#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	string s;cin>>s;
	int ans=1;
	for(int i=2;i<=n/2;i++)
    {
		if(s.substr(0,i)==s.substr(i,i))ans=i;
	}
	cout<<n-ans+1<<endl;
	return 0;
}
