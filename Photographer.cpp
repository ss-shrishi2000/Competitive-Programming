#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;cin>>n>>d;
    int a,b,x,y;cin>>a>>b;
    pair<int,int> p[n];
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p[i].first=a*x+b*y;
        p[i].second=i+1;
    }
    sort(p,p+n);
    int i;
    for(i=0;i<n;i++)
    {
        d-=p[i].first;
        if(d<0)break;
    }
    cout<<i<<endl;
    for(int j=0;j<i;j++)cout<<p[j].second<<" ";
    cout<<endl;
}
