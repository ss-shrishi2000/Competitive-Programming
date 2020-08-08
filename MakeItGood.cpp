#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int p=n-1;
        while(p>0 and a[p-1]>=a[p])--p;
        while(p>0 and a[p-1]<=a[p])--p;
        cout<<p<<endl;
    }
}
