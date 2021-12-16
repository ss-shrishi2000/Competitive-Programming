#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string s, ans="";
    cin>>s;
    string r="";
    stack<char> stc;
    for(int i=0;i<n;i++)
    {
        if(stc.size()==0)
            ans+=s[i], stc.push(s[i]);
        else
        {
            if(stc.empty()==false && stc.size()%2 && stc.top()==s[i])
                continue;
            else
                ans+=s[i] , stc.push(s[i]);
        }
    }

    if(stc.size()%2)
        r = ans.substr(0,ans.size()-1);
    else
        r=ans;

    cout<<s.size()-r.size()<<endl;
    cout<<r<<endl;
    return 0;
}
