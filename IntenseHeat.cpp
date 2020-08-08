#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main()
{
    int n,k;cin>>n>>k;
    int a[n],pr[100007];
    for(int i=0;i<n;i++)cin>>a[i];
	pr[0]=0;
	for(int i=0;i<n;i++)pr[i + 1] = pr[i] + a[i];
	ld ans = 0;
	for(int r=0;r<n;r++)
	for(int l=0;l<r+1;l++)
    {
		if(r -l+ 1 >= k)
		{
			ans = max(ans, (pr[r + 1] - pr[l]) / ld(r - l + 1));
		}
	}
	cout<<fixed;
	cout<<setprecision(15);
	cout<<ans;
	return 0;
}
