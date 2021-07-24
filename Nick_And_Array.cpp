#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int index=0, mx=INT_MIN;
    vector<int> v(n);
	for (int i=0; i<n; i++)
    {
		cin>>v[i];
		if (v[i]>=0)
		    v[i]=-v[i]-1;
		if (v[index]>v[i])
		    index=i;
	}
	if (n%2==1)
    {
		v[index]=-v[index]-1;
	}
	for(int i=0; i<n; i++)
		cout<<v[i]<<' ';
}
