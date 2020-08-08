#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(s[i].substr(j,2)=="fa" && (s[i+1].substr(j,2)=="ce"))cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
