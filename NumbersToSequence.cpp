#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long l=n;
		int maxn=1;
		long long x=n;
		for(long long i=2;i*i<=n;i++)
        {
			int k=0;
			while(n>1)
			{
				if(n%i==0)
				{
				n/=i;k++;
				}
				else break;
			}
			if(k>maxn)
			{
            maxn=k;
            x=i;
			}
		}
		cout<<maxn<<endl;
		for(int i=0;i<maxn-1;i++)
		{
			cout<<x<<" ";
			l/=x;
		}
		cout<<l<<endl;
    }
    return 0;
}
