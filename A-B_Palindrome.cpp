#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
    string s;cin>>s;
    if(a%2&&b%2){
      cout<<-1<<endl;
      continue;
    }
    int fl=0;
    int n=s.size();
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='?')
      {
        if(s[n-i-1]!='?')
        {
          s[i]=s[n-i-1];
        }
      }
      else if(s[i]!=s[n-i-1]&&s[n-i-1]!='?')
      {
        fl=1;
        cout<<-1<<endl;
        break;
      }
    }
    if(fl)
      continue;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='1')
        b--;
      else if(s[i]=='0')
        a--;
    }

    for(int i=0;i<s.size()/2;i++)
    {
      if(s[i]=='?')
      {
        if(a>b)
        {
          s[i]='0';
          s[n-i-1]='0';
          a-=2;
        }
        else{
          s[i]='1';
          s[n-i-1]='1';
          b-=2;

        }
      }
    }
    if(a<0||b<0)
    {
      cout<<-1<<endl;
    }
    else{
      if(a||b)
      {
        s[n/2]=a?'0':'1';
      }
      cout<<s<<endl;
    }
    }
    return 0;
}
