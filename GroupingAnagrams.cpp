#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    vector<vector<string>> ans;
    vector<vector<string>> r;
    for(int i=0;i<n;i++)
    {
    string p=s[i];
    sort(p.begin(),p.end());
    r[p].push_back(str[i]);
    }
}
