#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        pair<int,int> pr[n];
        for(int i=0; i<n ;i++)
            cin>>pr[i].first;

        for(int i=0; i<n; i++)
            cin>>pr[i].second;

        sort(pr,pr+n);
        int ans=k;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(pr[i].first<=k)
                    ans+=pr[i].second;
            }
            else{
                if(ans>=pr[i].first)
                    ans+=pr[i].second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
