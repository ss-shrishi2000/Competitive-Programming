#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int w;cin>>w;
        vector<int> ans;
        long long k=0;
        pair<int,int> p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i].first;
            p[i].second=i+1;
            // cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        sort(p,p+n);
        for(int i=n-1;i>=0;i--)
        {
           if(k+p[i].first<=w)
           {
               ans.push_back(p[i].second);
               k+=p[i].first;
               // cout<<k<<endl;
           }
        }
        if(2*k<w){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans.size()<<endl;
        for(int j=ans.size()-1;j>=0;j--)cout<<ans[j]<<" ";
        cout<<endl;
    }
    return 0;
}
