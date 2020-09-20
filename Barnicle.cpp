#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int p=stoi(s.substr(s.find("e")+1));
    if(p==0 || s[0]!='0')cout<<s[0];
    int j=2;
    for(;j<s.size() and p>0 and s[j]!='e';j++,p--)
    {
        cout<<s[j];
    }
    if(s[j]!='e')
    {
        if(!(s[j]=='0' && s[j+1]=='e'))
        {
            cout<<'.';
            for(;s[j]!='e';j++)cout<<s[j];
        }
    }
    while(p>0){cout<<0;p--;}
}
