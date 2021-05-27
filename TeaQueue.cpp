#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        vector<int> ans;
        int n;cin>>n;
        pair<int,int> p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].first>>p[i].second;
        int t=1;
        for(int i=0;i<n;i++)
        {
            if(p[i].first<=t && p[i].second>=t)
            {
                ans.push_back(t);
                t+=1;
            }
            else if(p[i].first>t && p[i].second>=t)
            {
                t=max(t,p[i].first);
                ans.push_back(t);
                t+=1;
            }
            else
            {
                ans.push_back(0);
            }
        }
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
