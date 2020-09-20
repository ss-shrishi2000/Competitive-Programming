#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans="";cin>>s;
    ans+=s[0];
    set<char> check,p;
    check.insert('a');
    check.insert('e');
    check.insert('i');
    check.insert('o');
    check.insert('u');
    for(int i=1;i<s.size()-1;i++)
    {
        p.insert(s[i-1]);
        p.insert(s[i]);
        p.insert(s[i+1]);
        if(check.count(s[i-1])==1 or check.count(s[i])==1 or check.count(s[i+1])==1)
        {
            ans+=s[i];
            cout<<ans<<endl;
        }
        else if(p.size()==1)
        {
            ans+=s[i];
            cout<<ans<<endl;
        }
        else if(p.size()==2)
        {
            ans+=s[i]+" "+s[i+1];
            i++;
            if(i==s.size())break;
            cout<<ans<<endl;
        }
        else
            ans+=s[i];
        p.clear();
    }
    cout<<ans;
    return 0;
}
