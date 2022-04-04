#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c; cin>>c;
        map<char,int> mp;
        s = '.'+s;
        bool f=false;
        for(int i=1; i<s.size(); i++)
        {
            mp[s[i]]=i;
            if(s[i]==c)
            {
                if(mp[s[i]]%2)
                {
                    f=true;
                    break;
                }
            }
        }
        if(f==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
