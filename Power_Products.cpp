#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int x,ans=0;
    map< vector<pair<lli,lli>> , lli > mp;
    /*
    NOT SO EFFICIENT ALGORITHM

    long long int ans=0;
    map<long long int , long long int> mp;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            long long int pr=a[i]*a[j];
            mp[pr]++;
        }
    }
    for(auto it:mp)
    {
        long long int pr= it.first;
        for(int k=1;k<=sqrt(pr)+1;k++)
        {
            long long int r=pow(k,m);
            if(r==it.first)
            {
                ans+=it.second;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
    */

    //EFFICIENT ONE

    vector<pair<lli , lli > > a,b;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        for(int j=2;j<=sqrt(x)+1;j++)
        {
            lli r=0;
            while(x%j==0)
            {
                x=x/j;
                r++;
            }
            if(r%k)
            a.push_back({j,r%k});
        }
        if(x>1)
        a.push_back({x,1});

        for(int j=0;j<a.size();j++)
        {
            b.push_back({a[j].first , k - a[j].second});
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ans+=mp[b];
        mp[a]++;
        a.clear();
        b.clear();
    }
    cout<<ans;
    return 0;
}
