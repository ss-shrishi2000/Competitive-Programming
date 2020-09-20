#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.size(),m,x;cin>>m;
    int sum[n];
    memset(sum,0,sizeof(sum));
    for(int i=0;i<m;i++)
    {
        cin>>x;x--;
        for(int i=x;i<=n-x-1;i++)
        {
            sum[i]++;
        }
    }
    for(int i=0;i<n/2;i++)
    {
        if(sum[i]%2!=0)
        {
            swap(s[i],s[n-i-1]);
        }
    }
    cout<<s;
    return 0;
}
