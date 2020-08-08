#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[100005],b[100005];
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    for(int i=0;i<n;i++)
    {
        if((i<n/2)||(a[i]<b[n-i-1]))cout<<"1";
        else cout<<"0";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(i<n/2||(b[i]<a[n-i-1]))cout<<"1";
        else cout<<"0";
    }
}
