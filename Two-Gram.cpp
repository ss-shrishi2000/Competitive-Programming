#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,m=0;cin>>l;
    string s;cin>>s;
    map<string,int> mp;
    for(int i=0;i<l-1;i++)
    {
        mp[s.substr(i,2)]+=1;
        if(m<mp[s.substr(i,2)])m=mp[s.substr(i,2)];
    }
    if(s.size()==2){cout<<s;return 0;}
    for(auto it:mp)
    {
        if(it.second==m){
        cout<<it.first;
        return 0;
        }
    }
}
