#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<s.size();i++)
        {
            if(s.substr(i,2)=="00")
                ans+=2;
            else if(s.substr(i,3)=="010")
                ans+=1;
         }
         cout<<ans<<endl;
     }
 }
