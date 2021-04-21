#include<bits/stdc++.h>
using namespace std;
int prea[100000],preb[100000],prec[100000];
int main()
{
    string s;
    cin>>s;
    long long n=s.size();
    map<pair<int,int> , int> mp;
    long long ans=0;
    mp[{0,0}]=1;

    for(int i=1;i<=n;i++)
    {
        if(s[i-1]=='A')
        {
            prea[i]=prea[i-1]+1;
            preb[i]=preb[i-1];
            prec[i]=prec[i-1];
        }
        else if(s[i-1]=='B')
        {
            prea[i]=prea[i-1];
            preb[i]=preb[i-1]+1;
            prec[i]=prec[i-1];
        }
        else
        {
            prea[i]=prea[i-1];
            preb[i]=preb[i-1];
            prec[i]=prec[i-1]+1;
        }

        pair<int,int> p=make_pair(prea[i]-preb[i] , prea[i]-prec[i] );
        if(mp.find(p)!=mp.end())
        {
            ans+=mp[p];
            mp[p]++;
        }
        else
            mp[p]=1;
    }
    cout<<ans;
    return 0;
}
