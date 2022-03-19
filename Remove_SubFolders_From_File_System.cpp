#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int n;
    cin>>n;
    vector<string> folder;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        folder.push_back(x);
    }
    vector<string> ans;
    map<string,int> mp;
    sort(folder.begin(),folder.end());

    for(int i=0; i<folder.size(); i++)
    {
        string s1 = folder[i];
        string samp="";
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='/' && i==0)
                samp+=s1[i];
            else if(s1[i]=='/')
            {
                if(mp.find(samp) != mp.end())
                {
                   // cout<<1<<endl;
                    break;
                }
                //mp[samp]++;
                samp+=s1[i];
            }
            else if(s1[i]!='/')
            {
                samp+=s1[i];
                if(mp.find(samp) != mp.end() && s1[i+1]=='/')
                {
                    //cout<<2<<endl;
                    break;
                }
                else if(mp.find(samp) == mp.end() && i==s1.size()-1)
                {
                    ans.push_back(samp);
                    mp[samp]++;
                }
            }
           // cout<<samp<<endl;
        }
    }
    for(auto it=0; it<ans.size();it++)
   {
       cout<<ans[it]<<endl;
   }
    return 0;
}
