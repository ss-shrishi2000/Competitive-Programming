#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;cin>>n;
    ans=n;
    string s;cin>>s;
    for(int i=1;i<=s.size()/2;i++)
    {
        if(s.substr(0,i)==s.substr(i,i))
        {
            ans=min(n,n-i+1);
        }
    }
    cout<<ans;
}
