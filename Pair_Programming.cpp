#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int k,n,m; cin>>k>>n>>m;
        int a[n];
        int b[m];
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];
        int sum = k;
        vector<int> ans;

        int i=0,j=0;
        bool f=true;
        while(i<n || j<m)
        {
            if(i<n && a[i]<=sum)
            {
                if(a[i]==0)sum++;
                ans.push_back(a[i]);
                i++;
            }
            else if(j<m && b[j]<=sum)
            {
                if(b[j]==0)sum++;
                ans.push_back(b[j]);
                j++;
            }
            else
            {
                f=false;
                break;
            }
        }
        if(f==false)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<ans.size(); i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
