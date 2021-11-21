#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];

    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];

    map<int,int> mp;
    mp[a[0]]++;
    mp[b[0]]++;
    long long int x=a[0],y=b[0];

    for(int i=1;i<n;i++)
        x+=a[i] , mp[x]++;

    for(int i=1;i<m;i++)
        y+= b[i] , mp[y]++;

    int c=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==2)
            c++;
    }
    cout<<c;
    return 0;
}
