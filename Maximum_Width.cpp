#include<bits/stdc++.h>
using namespace std;
int xa[200010] , xb[200010];
int main()
{
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    for(int i=0,j=0; i<n && j<m ;i++,j++)
    {
        while(s[i]!=t[j])i++;
        xa[j]=i;
    }
    for(int i=n-1,j=m-1; j>=0 ;i--,j--)
    {
        while(s[i]!=t[j])i--;
        xb[j]=i;
    }
    int ans=INT_MIN;
    for(int i=0;i<m-1;i++)
    {
        ans=max(ans , xb[i+1]-xa[i]);
    }
    cout<<ans;
    return 0;
}
