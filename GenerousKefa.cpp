#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=INT_MIN,cnt=1;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second<=k)
            continue;
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
