#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    if(t.size()<s.size())cout<<"No";
    else{
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(t[i]!=s[i]){cout<<"No";return 0;}
        }
        cout<<"Yes";
    }
}
