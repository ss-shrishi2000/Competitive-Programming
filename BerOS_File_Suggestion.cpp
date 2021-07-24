#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    map<string,string> hashmap;
    map<string ,int> mp;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            string p="";
            for(int j=i;j<s.size();j++)
            {
                p+=s[j];
                if(hashmap[p]!=s)
                {
                    mp[p]++;
                }
                hashmap[p]=s;
            }
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        cin>>s;
        cout<<mp[s] << " ";
        if(mp[s])
        {
            cout<<hashmap[s]<<endl;
        }
        else
            cout<<"-"<<endl;
    }
    return 0;
}
