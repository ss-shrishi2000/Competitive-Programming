#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int b[n];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]+b[i-1]==k)b[i]=a[i];
        else if(a[i]+b[i-1]<k)b[i]=k-b[i-1];
        else{
            b[i]=a[i];
        }
    }
    int d=0;
    for(int i=1;i<n;i++)
    {
        d+=abs(a[i]-b[i]);
    }
    cout<<d<<endl;
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
    return 0;
}
