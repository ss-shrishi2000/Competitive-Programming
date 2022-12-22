#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f[26]{0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')f[s[i]-'a']++;
        else f[s[i]-'A']++;
    }
    bool fl=false;
    for(int i=0;i<26;i++)
    {
        if(f[i]==0){fl=true;break;}
    }
    if(fl==false)cout<<"YES";
    else cout<<"NO";
    return 0;
}
