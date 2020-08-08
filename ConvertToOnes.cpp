#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;cin>>n>>x>>y;
    string s;cin>>s;
    long long int c=0,p=0;
    if(s[0]=='0')c++;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])continue;
        if(s[i]=='0')c++;
    }
    if(c==0)cout<<0;
    else{
        long long int r=(c-1)*x;
        long long int r1=c*y;
        cout<<min(r+y,r1);
    }
}
