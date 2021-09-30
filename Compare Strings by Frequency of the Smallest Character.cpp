#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    vector<string> queries , words;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        queries.push_back(s);
    }
    for(int i=0;i<m;i++)
    {
        cin>>s;
        words.push_back(s);
    }
     map<string,int> fw,fq;

        for(int i=0;i<words.size();i++)
        {
            map<char,int> hsh;
            for(int j=0;j<words[i].size();j++)
            {
                hsh[words[i][j]]++;
            }
            int cnt=0;
            auto it=hsh.begin();
            cnt= it->second;
            fw[words[i]]=cnt;
        }

        for(int i=0;i<queries.size();i++)
        {
           map<char,int> hsh;
            for(int j=0;j<queries[i].size();j++)
            {
                hsh[queries[i][j]]++;
            }
            int cnt=0;
            auto it=hsh.begin();
            cnt= it->second;
            fq[queries[i]]=cnt;
        }

        vector<int> res;
        for(int i=0;i<queries.size();i++)
        {
            int ans=0;
            for(int j=0;j<words.size();j++)
            {
                if( fq[queries[i]] < fw[words[j]] )
                {
                    ans++;
                }
            }
            res.push_back(ans);
        }
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<endl;

        return 0;
}
