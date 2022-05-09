#include<bits/stdc++.h>
using namespace std;
long long int a[100005],b[100005],cum[100005],d[100005],l[100005],r[100005];
int main()
{
    int n,m,x,y,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>d[i];
    }
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y;
        b[x]++;
        b[y+1]--;
    }

    for(int i=1;i<=m;i++)
    {
        b[i]+=b[i-1];
        cum[l[i]]+=b[i]*d[i];
        cum[r[i]+1]-=b[i]*d[i];
    }
    for(int i=1;i<=n;i++)
    {
        cum[i]+=cum[i-1];
        cout<<cum[i]+a[i]<<" ";
    }
    return 0;
}
