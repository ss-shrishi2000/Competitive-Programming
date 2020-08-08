#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    set<char> p;
    if(s.size()<4){cout<<"No";return 0;}
    for(int i=0;i<s.size();i++)
    {
        p.insert(s[i]);
    }
    if(p.size()>4 || (p.size()==1))cout<<"No";
    else if(p.size()==3 || (p.size()==4))cout<<"Yes";
    else if(p.size()==2)
    {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        for(char c='a';c<='z';c++)
        {
            if(mp[c]==0)continue;
            else if(mp[c]==1){cout<<"No";return 0;}
        }
        cout<<"Yes";
    }
}
