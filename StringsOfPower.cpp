#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    long long int ans=0,cnt=0;
    if(s.size()<=5){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<s.size()-4;i++)
    {
        if(s.substr(i,5)=="heavy")
        {
            cnt++;
            //cout<<i<<endl;
        }
        else if(s.substr(i,5)=="metal")
        {
            //cout<<i<<endl;
            ans+=cnt;
        }
    }
    cout<<ans;
    return 0;
}
