#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	int a[200005];
	long long ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]-=min(a[i],k*(a[i-1]%k!=0)-a[i-1]%k);
        ans+=(a[i]+k-1)/k;
    }
	cout<<ans;
	return 0;
}
