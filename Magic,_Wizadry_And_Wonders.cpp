#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,l;
    cin>>n>>d>>l;
    int ans[n+10];
    
    memset(ans,0,sizeof(ans));
    for(int i=1;i<n;i++)
    {
        if(d>0)ans[i]=l;
        else ans[i]=1;

        d=ans[i]-d;
    }
    
    ans[n]=d;
    if(ans[n]>l or ans[n]<1)
    {
    cout<<-1;
    return 0;
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
