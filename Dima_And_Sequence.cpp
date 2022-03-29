#include<bits/stdc++.h>
using namespace std;
int calc(int x)
{
    if(x==0)
        return 0;
    else if(x==1 || x==2)
        return 1;
    else if(x%2==0)
        return calc(x/2);
    else
        return calc(x/2)+1;
}
int main()
{
    long long int n;cin>>n;
    long long int a;
    map<long long int,long long int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[calc(a)]++;
    }
    long long int ans=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
       long long int p=(it->second);
       ans+=(p*(p-1))/2LL;
    }
    cout<<ans;
    return 0;
}
