#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<long> a,b,z,ab;
	long n,ans=0;
	cin>>n;
	for(long i=0, x, y;i<n; ++i)
	{
		cin>>x>>y;
		if(x==0)z.push_back(y);
		else if(x==1)b.push_back(y);
		else if(x==10)a.push_back(y);
		else ab.push_back(y);
	}

	if(a.size()<b.size())a.swap(b);
	sort(a.rbegin(),a.rend());

	for(long i=b.size(); i<a.size(); ++i)z.push_back(a[i]);
	sort(z.rbegin(),z.rend());

	for(long i=0; i<ab.size(); ++i)ans +=ab[i];

	for(long i=0; i<b.size(); ++i)ans+= a[i]+b[i];

	for(long i=min(ab.size(),z.size())-1; i>=0; --i)ans+= z[i];
	cout<<ans;
	return 0;
}
