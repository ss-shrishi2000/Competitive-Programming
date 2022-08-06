#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s,ans="";
    cin>>s;
    for(int i=0;i<n and k>0;i++)
    {
    if(i==0 and n!=1)
    {
    k-=(s[i]!='1');
    s[i]='1';
    }
    else
    {
        k-=(s[i]!='0');
        s[i]='0';
    }
    }
    cout<<s;
    return 0;
}
