#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> vec;
        int x,y;
        vector<int> l,r;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            vec.push_back({x,y});
            l.push_back(x);
            r.push_back(y);
        }
        sort(l.begin(),l.end());
        sort(r.begin(),r.end());
        int ans=INT_MAX;
        for(auto [lcheck,rcheck] : vec)
        {
            int left=lower_bound(r.begin(),r.end(),lcheck) - r.begin();
            int right = n - (upper_bound(l.begin(),l.end(),rcheck) - l.begin());
            ans=min(ans,left + right);
        }
        cout<<ans<<endl;
    }
    return 0;
}
