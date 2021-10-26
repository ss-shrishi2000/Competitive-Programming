#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    bool vis[n+10];
    int ans=0;
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        if(vis[arr[i]]==false)
        {
            vis[arr[i]]=true;
            int cnt=0;
            for(int j = i+1;j<n;j++)
            {
                if(vis[arr[j]]==false)
                    cnt++;
                else if(arr[i] == arr[j])
                    ans+=cnt;
            }
        }
    }
    cout<<ans;
    return 0;
}
