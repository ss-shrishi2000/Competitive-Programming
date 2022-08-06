#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    map<char, char> mp;
    bool f = true;
    vector<pair<char, char>> ans;
    map<char, char> used;
    set<char> same;

    for(int i=0; i<s.size(); i++)
    {
        if((mp.find(s[i])==mp.end() && mp.find(t[i])!=mp.end()) || (mp.find(s[i])!=mp.end() && mp.find(t[i])==mp.end()))
        {
            f = false;
            break;
        }

        if(mp.find(s[i])== mp.end())
        {
            mp[s[i]] = t[i];
            mp[t[i]] = s[i];
            //cout<< s[i] << " " << mp[s[i]] << endl;
            if(s[i]==t[i])
                continue;

            ans.push_back(make_pair(s[i], t[i]));
        }
        else if(mp.find(s[i])!=mp.end() && mp[s[i]] == t[i])
            continue;
        else
        {
            //cout<< s[i] << " " << mp[s[i]] << "1233" << endl;
            if(mp[s[i]] != t[i] || mp[t[i]]!=s[i])
            {
                f = false;
                break;
            }
        }
    }
    if(f==false)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i].first << " " << ans[i].second<<endl;

    return 0;
}
