#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+10];
    int l[n+10],r[n+10];
    for(int i=1;i<=n;i++){
    cin>>a[i];
    }
    l[0]=1e9; r[n+1]=1e9;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0)l[i]=0;
        else l[i]=l[i-1]+1;
    }
    for(int i=n;i>=1;i--)
    {
        if(a[i]==0)r[i]=0;
        else r[i]=r[i+1]+1;
    }
    for(int i=1;i<=n;i++)cout<<min(l[i],r[i])<<" ";
}
