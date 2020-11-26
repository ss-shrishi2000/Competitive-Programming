#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int l=s.size();
    long long int ans=0,c1=0,c2=0;
    for(int i=1;i<l;i++)
    {
        if(s[i]==s[i-1] and s[i]=='v')
        {
            c1++;
            ans+=c2;
        }
        else if(s[i]=='o')c2+=c1;
    }
    cout<<ans;
    return 0;
}
