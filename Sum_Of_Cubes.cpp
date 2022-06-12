#include<bits/stdc++.h>
using namespace std;
set<long long> s;
long long x;
int main()
{
	int t;
	cin>>t;
	for(long long i=1;i<=10000;i++)
        s.insert(i*i*i);
	while(t)
	{
		t--;
		cin>>x;
		bool flag=false;
		for(long long i=1;i<=10000;i++)
		if(s.count(x-i*i*i))
		{
			flag=true;
			break;
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
