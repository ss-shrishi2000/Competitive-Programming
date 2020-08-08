#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,set<string>>mp;
    int n,nph;cin>>n;
    string name,phone;
    for (int i=1;i<=n;i++)
    {
        cin>>name>>nph;
        for(int i=0;i<nph;i++)
        {
            cin>>phone;
            mp[name].insert(phone);
        }
    }
    cout<<mp.size()<<endl;
    for (auto &it:mp)
    {
        set <string> r= it.second;
        for (auto &it2:r)
            for (int i = 1; i < it2.size(); i++)
                if (it.second.count(string(it2.begin()+i, it2.end())))
                    it.second.erase(string(it2.begin()+i, it2.end()));
    }
    for (auto &it :mp)
    {
        cout << it.first << " " << it.second.size() << " ";
        for (auto &it2 : it.second)
            cout << it2 << " ";
        cout<<endl;
    }
}
