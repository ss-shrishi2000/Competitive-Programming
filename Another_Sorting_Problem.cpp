#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[i])
            continue;

        if((i+1)%2)
        {
            return (a[i]<b[i]);
        }
        else if((i+1)%2==0)
            return (a[i]>b[i]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    map<string,int> mp;
    for(int i=0; i<n; i++)cin>>s[i], mp[s[i]] = i;
    sort(s,s+n,cmp);
    for(int i=0; i<n; i++)
        cout<<mp[s[i]]+1<<" ";
    return 0;
}
