#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    stack<char> st;
    int open=0,closed=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' or s[i]=='{' or s[i]=='[' or s[i]=='<')
            open++;
        else
            closed++;
    }
    if(open!=closed)
    {
        cout<<"Impossible";
        return 0;
    }
    map<char,char> mp;
    mp['>']='<';
    mp[']']='[';
    mp[')']='(';
    mp['}']='{';
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' or s[i]=='{' or s[i]=='[' or s[i]=='<')
            {
                st.push(s[i]);
            }
        else{
                if(st.empty()==true)
                {
                    cout<<"Impossible";
                    return 0;
                }
                else {
                    char p=st.top();
                    st.pop();
                    if(p==mp[s[i]])
                        continue;
                    else
                        ans++;
                }
        }
    }
    cout<<ans<<endl;
    return 0;
}
