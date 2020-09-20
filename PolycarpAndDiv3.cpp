#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int l=s.size(),r=0,sum=0,cnt=0;
    for(int i=0;i<l;i++)
    {
        sum+=(s[i]-'0');
        cnt+=1;
        if(cnt%3==0 or sum%3==0 or (s[i]-'0')%3==0)
        {
            r+=1;
            cnt=0;sum=0;
        }
    }
    cout<<r;
    return 0;
}
