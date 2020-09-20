#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        map<long long,long long> mp;
        int prefix=0;
        long long ans=0;
        mp[0]++;
        for(int i=0;i<s.size();i++)
        {
            prefix+=s[i]-'0'-1;
            ans+=mp[prefix];
            mp[prefix]++;
        }
        cout<<ans<<endl;
    }
}
