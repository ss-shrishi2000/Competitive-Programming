#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
        int cnt=1;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]=cnt, cnt++;

        int ans=0;
        for(int i=1; i<s1.size(); i++)
        {
            ans += abs(mp[s1[i]] - mp[s1[i-1]]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
