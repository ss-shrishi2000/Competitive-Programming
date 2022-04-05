#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s; cin>>s;
        set<char> c;
        for(int i=0; i<s.size();i++)
            c.insert(s[i]);

        auto p = *c.begin();
        cout<< p << " ";
        string ans="";
        auto it= find(s.begin(),s.end(), p)-s.begin();
        ans = s.substr(0,it) + s.substr(it+1);
        cout<<ans<<endl;
    }
    return 0;
}
