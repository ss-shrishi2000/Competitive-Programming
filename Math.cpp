#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ans=1,t,a,c=0,n;cin>>n;
	a=n;
	for(long long i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			ans*=i;
			while(n%i==0)n/=i;
		}
	}
	t=ans;
    while(t%a){
    t*=t;
    c++;
    }
	if(t>a)c++;
	cout<<ans<<" "<<c;
}
