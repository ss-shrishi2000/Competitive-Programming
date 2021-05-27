#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y;
    cin>>n>>x>>y;
    string s;cin>>s;
    long long int cnt=0;
    for(int i=0;i<s.size();)
    {
        if(s[i]=='0')
        {
            while(s[i]=='0' && i<s.size())
                i++;
            cnt+=1;
        }
        else
        {
            while(s[i]=='1' && i<s.size())
                i++;
        }
    }
    //cout<<cnt;
    if(cnt==0)
    {
        cout<<0;
        return 0;
    }
    long long int ans= (cnt-1)*(min(x,y)) + y;
    cout<<ans;
    return 0;
}
