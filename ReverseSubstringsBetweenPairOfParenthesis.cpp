#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<int> c;
    cin>>s;
    string dummy="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')c.push(i);
        else{
            int p=c.top();
            c.pop();
            reverse(s.begin()+p,s.begin()+i);
        }
    }

    string ans="";
   for(int i=0;s[i];i++)
       if(s[i]!='(' and s[i]!=')')
        ans+=s[i];
    cout<<ans<<endl;
}
