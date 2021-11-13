#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string order,s;
        cin>>order>>s;
        map<char,int> mp;
        for(int i=0;i<order.size();i++)
            mp[order[i]] = i+1;
        int ans=0;
        for(int i=1; i<s.size(); i++)
            ans += abs( mp[s[i]] - mp[s[i-1]] );

        cout<<ans<<endl;
    }
}
