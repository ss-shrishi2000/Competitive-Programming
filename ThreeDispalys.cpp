#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long s[n],c[n],ans=1e15;
    long long v1=1e15,v2=1e15;
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++)cin>>c[i];
    for(int i=1;i<n;i++)
    {
        v1=1e15,v2=1e15;
        for(int j=0;j<i;j++)
        {
            if(s[j]<s[i]){v1=min(v1,c[j]);}
        }
        for(int j=i+1;j<n;j++)
        {
            if(s[j]>s[i]){v2=min(v2,c[j]);}
        }
        ans=min(ans,c[i]+v1+v2);
    }
    if(ans==1e15)cout<<-1;
    else cout<<ans;
    return 0;
}
