#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n,i,s=0,m,l,r;
    cin>>n>>m;
    char a[n+2];
    ll sum[n+2];
    sum[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=='+'?s++:s--;
        sum[i]=s;
    }
    ll maxp[n+2],minp[n+2],maxs[n+2],mins[n+2];
    maxp[0]=minp[0]=0;
    ll mx=0,mn=0;
    s=0;
    for(i=1;i<=n;i++)
    {
        a[i]=='+'?s++:s--;
        mx=max(mx,s);
        mn=min(mn,s);
        maxp[i]=mx,minp[i]=mn;
    }
    maxs[n+1]=mins[n+1]=0;
    mx=0,mn=0,s=0;
    for(i=n;i>0;i--)
    {
        a[i]=='+'?s--:s++;
        mx=max(mx,s);
        mn=min(mn,s);
        maxs[i]=mx;
        mins[i]=mn;
    }
    for(i=0;i<m;i++)
    {
        cin>>l>>r;
        ll neg=sum[r]-sum[l-1];
        mx=max(maxp[l-1],sum[n]-neg+maxs[r+1]);
        mn=min(minp[l-1],sum[n]-neg+mins[r+1]);
        cout<</*mx<<" "<<mn<<" "<<*/abs(mx)+abs(mn)+1<<endl;
    }
  }
}
