#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    string a;a=s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i-1])for(s[i]='a';s[i]==s[i+1] || s[i]==s[i-1];s[i]++);
    }
    cout<<s;
    return 0;
}
