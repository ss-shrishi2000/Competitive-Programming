#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s,nonbeautiful="1";
    long long int ans=0;
    for(int j=0;j<n;j++)
    {
    cin>>s;
    if(s=="0")
    {
        cout<<0;
        return 0;
    }
    int c1=0;
    if(s[0]=='1')c1++;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')c1++;
    }
    if(c1!=s.size())nonbeautiful=s;
    else
    ans+=s.size()-1;
    }
    cout<<nonbeautiful;
    for(int i=0;i<ans;i++)cout<<0;
    return 0;
}


