#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    bool f=false;
    int p1=0,p2=0;
    int x=t.length();
    for(int i=0;i<s.length();i++)
    {
        if(s.substr(i,x)==t){p1=i,p2=s.length()-(i+x);}
    }
    cout<<max(p1,p2);
}
