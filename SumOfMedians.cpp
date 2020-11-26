#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[k*n+10];
        for(int i=1;i<=n*k;i++)cin>>a[i];
        long long int s=0;
        int p=n*k;
        for(int j=k+1;j<p;j+=k)
        {
        s+=a[j];
        cout<<a[j]<<endl;
        }
        cout<<s<<endl;
    }
    return 0;
}
