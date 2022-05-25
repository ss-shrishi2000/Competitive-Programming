#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,cost; cin>>n>>m;
    string s;
    vector<pair<int, string>> vec[m+2];
    for(int i=0; i<n; i++)
    {
        cin>>s>>x>>cost;
        vec[x].push_back(make_pair(cost,s));
    }
    for(int i=1; i<=m; i++)
    {
        sort(vec[i].begin(), vec[i].end());
        reverse(vec[i].begin(), vec[i].end());
        if(vec[i].size()>2 && vec[i][1].first == vec[i][2].first)
        {
            cout<<"?";
            cout<<endl;
        }
        else
        {
            cout<< vec[i][0].second << " " << vec[i][1].second << endl;
        }
    }
    return 0;

}
