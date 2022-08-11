#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    map<int, int> mp;
    map<int, vector<int>> v;

    for(int i=0; i<n; i++)
    {
        cin>>a[i], mp[a[i]]++;
        int x = a[i];
        for(int j=0; x>0; j++)
        {
            v[x].push_back(j);
            x = x/2;
        }
    }

    bool f = false;
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>=k)
        {
            f = true;
            break;
        }
    }
    if(f)
        cout<<0<<endl;
    else
    {
    int ans=1e9;
	for(int i=0;i<=200005;i++)
	{
		if(v[i].size()>=k)
		{
			sort(v[i].begin(),v[i].end());
			int sum=0;
			for(int j=0;j<k;j++)
			{
				sum+=v[i][j];
			}
			ans=min(sum,ans);
		}
	}
	cout<<ans;
    }
    return 0;
}
