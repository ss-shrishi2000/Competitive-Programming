#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans,a;
    int n,x,sum=0;cin>>n;
    int queries[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        if(x%2==0)sum+=x;
    }
    for(int i=0;i<n;i++)cin>>queries[i][0]>>queries[i][1];
    for(int i=0;i<n;i++)
    {
        int ind=queries[i][1],toadd=queries[i][0];
        int now=a[ind];
        if(now%2==0)
        {
            a[ind]=a[ind]+toadd;
            if(a[ind]%2==0)sum+=toadd;
            else sum-=now;
            ans.push_back(sum);
        }
        else{
            a[ind]=a[ind]+toadd;
            if(a[ind]%2==0)sum+=a[ind];
            ans.push_back(sum);
        }
    }
    for(auto i:ans)cout<<i<<" ";
}
