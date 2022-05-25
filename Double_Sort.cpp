#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x;
        pair<int, int> pr[n];
        for(int i=0; i<n; i++)
        {
            cin>>x;
            pr[i].first = x;
        }
        for(int i=0; i<n; i++)
        {
            cin>>x; pr[i].second = x;
        }
        vector<pair<int, int>> ans;
        for(int i=0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(pr[i].first>pr[j].first || (pr[i].first==pr[j].first && (pr[i].second>pr[j].second)))
                {
                    swap(pr[i], pr[j]);
                    ans.push_back({i+1, j+1});
                }
            }
        }
        bool f=true;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(pr[i].first>pr[j].first || pr[i].second > pr[j].second)
                {
                    f=false;
                    break;
                }
            }
            if(f==false)
                break;
        }

        if(f==false)
            cout<<-1<<endl;
        else{
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i].first << " " << ans[i].second << endl;
        }
    }
    return 0;
}
