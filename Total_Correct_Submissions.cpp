#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int x;
    while(t--)
    {
        int n;
        cin>>n;
        n=3*n;
        map<string , int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>s>>x;
            mp[s]+=x;
        }
        vector<int> vec;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
           vec.push_back(it->second);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
        cout<<endl;
    }
    return 0;
}
