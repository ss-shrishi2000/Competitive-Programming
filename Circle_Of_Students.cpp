#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];for(int i=0;i<n;i++)cin>>a[i];
        int f[n];f[0]=1;
        bool flag=true;
        for(int i=1;i<n;i++)f[i]=abs(a[i]-a[i-1]);
        for(int i=0;i<n;i++){if(f[i]!=1&&(f[i]!=n-1)){cout<<"NO"<<endl;flag=false;break;}}
        if(flag!=false)cout<<"YES"<<endl;
    }
}
