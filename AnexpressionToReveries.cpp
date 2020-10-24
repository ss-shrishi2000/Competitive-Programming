#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1001],b[1001],c[1001],f; cin>>n;
    vector<int>v;
    set<int>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(s.find(a[i])!=s.end())f=a[i];
        s.insert(a[i]);
    }
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]==f)v.push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(s.find(i)==s.end())f=i;
    }
    for(int i=1;i<=n;i++)
    {
            if(i==v[0])c[i]=f;
            else c[i]=a[i];
    }
    int x=0;
    for(int i=1;i<=n;i++)
    {
    if(c[i]!=b[i])x++;
    }
    if(x>1)swap(c[v[0]],c[v[1]]);
    for(int i=1;i<=n;i++)cout<<c[i]<<' ';
}
