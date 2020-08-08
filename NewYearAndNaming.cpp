#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    string a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int q;cin>>q;
    while(q--)
    {
        int y;cin>>y;
        y--;
        cout<<a[y%n]+b[y%m]<<endl;
    }
    return 0;
}
