#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    map<char,int> hash_t , hash_s;

       if(t.size()!=s.size())
           return false;

        bool f=true;
        for(int i=0;i<t.size();i++)
        {
            if(hash_s[s[i]] != hash_t[t[i]])
                f=false;

            hash_s[s[i]]=i+1;
            hash_t[t[i]]=i+1;
        }
        if(f==true)
            cout<<"YES";
        else
            cout<<"NO";
        return 0;
}
