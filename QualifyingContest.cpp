#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    vector<pair<int,string>> p[m+10];
    string s;
    int score,region;
    for(int i=0;i<n;i++)
    {
        cin>>s>>region>>score;
        p[region-1].push_back(make_pair(score,s));
    }
    for(int i=0;i<m;i++)
    {
        sort(p[i].rbegin(), p[i].rend());
    }
    for(int i=0;i<m;i++)
    {
        if(p[i].size()>2)
		{
			if(p[i][1].first > p[i][2].first)
			{
			cout<<p[i][0].second<<" "<<p[i][1].second<<endl;
			}
			else
			{
				cout<<"?\n";
			}
		}
		else
		{
			cout<<p[i][0].second<<" "<<p[i][1].second<<endl;
		}
    }
    return 0;
}
