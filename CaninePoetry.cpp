#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int cnt=0,ans=0;
       string s;
       cin>>s;
       int a[s.size()];
       memset(a,0,sizeof(a));
       for(int i=1; i<s.size(); i++)
       {
        if(a[i-1]==0 && s[i-1]==s[i])
        {
              a[i]=1;                                        //palindrome
              cnt++;
        }
        if(i!=1 && a[i-2]==0 && s[i-2]==s[i])
        {
            a[i]=1;cnt++;
        }
       }
        cout<<cnt<<endl;
    }
}
