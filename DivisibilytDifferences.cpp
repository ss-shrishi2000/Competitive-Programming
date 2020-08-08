#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,m;cin>>n>>k>>m;
    vector<long long> rem[m];
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int x=a[i]%m;
        rem[x].push_back(a[i]);
    }
    bool f=false;
    for(int i=0;i<m;i++)
    {
        if(rem[i].size()>=k)
        {
            f=true;
            cout<<"Yes"<<endl;
            for(int j=0;j<k;j++)cout<<rem[i][j]<<" ";
        }
        if(f==true)break;
    }
    if(f==false)cout<<"No";
    return 0;
}
