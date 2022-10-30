#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,set<string>> mp;
    int n;cin>>n;
    string nam,ph;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>nam>>x;
        for(int i=0;i<x;i++)
        {
            cin>>ph;
            mp[nam].insert(ph);
        }
    }
    int m;
  printf("%lu\n", mp.size());
    for(const auto& it :mp)
    {
        set<string>S;
        for(const string& s : it.second)
        {
            n=s.length();
            bool f=true;
            for(const string& t : it.second)
            {
                m=t.size();
                if( m>n && s==t.substr(m-n, n))f=false;
            }
            if(f)S.insert(s);
        }
        printf("%s %lu", it.first.c_str(), S.size());
        for(const string& s : S)printf(" %s", s.c_str());
        cout<<endl;
    }
}
