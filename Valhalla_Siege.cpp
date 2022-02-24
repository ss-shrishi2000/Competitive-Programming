#include<bits/stdc++.h>
using namespace std;
long long n,q,a[200005],x,sum=0,lo,hi,mid;
int main()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[i]=a[i-1]+x;
	}
	sum=0;
	for(int i=1;i<=q;i++)
	{
		cin>>x;
		sum=sum+x;
		if(sum>=a[n])
        {
			cout<<n<<endl;
			sum=0;
			continue;
		}
		int lo=1;hi=n;
		while(lo<hi)
        {
        mid=(lo+hi)/2;
        if(a[mid]>=sum)
            hi=mid;
		else
		    lo=mid+1;
		}

		if(a[lo]==sum)
        {
            cout<<n-lo<<endl;
        }
        else
            cout<<n-lo+1<<endl;
	}
	return 0;
}
