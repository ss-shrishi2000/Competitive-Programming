#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    stack<char> p;
    for(int i=0;i<s.size();i++)
    {
        if(!p.empty() and s[i]==p.top())
        {
            p.pop();
        }
        else p.push(s[i]);
    }
    if(p.empty()==true)cout<<"Yes";
    else cout<<"No";
    return 0;
}
