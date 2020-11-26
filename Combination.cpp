#include<bits/stdc++.h>
using namespace std;
long long int cnt;
int main()
{
    int n,k;cin>>n>>k;
	vector<pair<int,int>> p;
	p.resize(n);
	for(int i=0;i<n;i++)
    {
		cin>>p[i].first>>p[i].second;
		p[i].first=-p[i].first;
	}
	cnt=0;
	sort(p.begin(),p.end());
    k--;
	for(int i=0;i<n;i++)
		if(p[i]==p[k])cnt++;

	cout<<cnt<<endl;
}
