#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<ll>fact(17,1);
	vector<ll>exp(17,1);
	for(int i=1; i<=16; i++)
    {
		fact[i]=i*fact[i-1];
		exp[i]=2*exp[i-1];
	}
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		ll ans=__builtin_popcountll(n);
		for(int i=0; i<(1<<17); i++)
        {
			ll sum=0;
			int cnt=0;
			for(int j=0; j<17; j++)
			{
				if(i&exp[j])
				{
					sum+=fact[j];
					cnt++;
					if(sum>n)
					 break;
				}
			}
			ll rem=n-sum;
			if(rem>=0)
			{
			ll var=__builtin_popcountll(rem);
		//	cout<<rem<<" "<<var<<"\n";
			ans=min(ans,var+cnt);
		    }
		}
		cout<<ans<<"\n";
	}
	return 0;
}
