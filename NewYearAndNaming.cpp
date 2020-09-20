#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    string a[n+1],b[m+1];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x;
        x--;
        cout<<a[x%n]+b[x%m]<<endl;
    }
    return 0;
}
