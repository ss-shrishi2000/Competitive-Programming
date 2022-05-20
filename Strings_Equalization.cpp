#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s, t;
        cin>>s>>t;
        map<char, int> mp;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++;

        bool f=false;
        for(int i=0; i<t.size(); i++)
        {
            if(mp.find(t[i]) != mp.end())
            {
                f=true;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
