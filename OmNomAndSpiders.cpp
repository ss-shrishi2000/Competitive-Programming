#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;cin>>n>>m>>k;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int res=0;
    for(int i=0;i<m;i++)
    {
        res=0;
        for(int j=1;j<n;j++)
        {
            if(i>=j && (v[j][i-j]=='R'))res++;
            if(i+j<m && (v[j][i+j]=='L'))res++;
            if(2*j<n && (v[2*j][i]=='U'))res++;
        }
        cout<<res<<" ";
    }
}
