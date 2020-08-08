#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> mp;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];mp[a[i]]++;
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        v.push_back(x);
        for(int j=0;j<n;j++)
        {
        if(mp.find(x/3)!=mp.end())
        {
        auto it=mp.find(x/3);
        v.push_back(*(it->first));
        }
        }
    }
}
