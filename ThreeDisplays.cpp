#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    long long ans=1e9,m1,m2;
    for(int j=0;j<n;j++)
    {
        m1=1e9,m2=1e9;
        for(int i=0;i<j;i++)
        {
            if(a[i]<a[j])m1=min(m1,b[i]);
        }
        for(int k=j+1;k<n;k++)
        {
            if(a[k]>a[j])m2=min(m2,b[k]);
        }
        ans=min(ans,b[j]+m1+m2);
    }
    if(ans==1e9)cout<<"-1";
    else
    cout<<ans;
}
