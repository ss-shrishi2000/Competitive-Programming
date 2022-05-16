#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        set<char> p;
        for(int i=0;i<s.size();i++)p.insert(s[i]);
        if(p.size()==1)cout<<"-1"<<endl;
        else{
            int l=s.size();
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
}
