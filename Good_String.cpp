#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
  while(n--)
  {
      string s;cin>>s;
      char a,b;
      int ans=0;
      for(a='0';a<='9';a++)
      {
          for(b='0';b<='9';b++)
          {
              int p=0,c=0;
              for(int i=0;i<s.size();i++)
              {
                  if(s[i]==a and p==0)
                  {
                      c++;p=1-p;
                  }
                  else if(s[i]==b and p==1)
                  {
                      c++;p=1-p;
                  }
              }
              if(a==b)ans=max(ans,c);
              else {
                if(c%2==1)ans=max(ans,c-1);
                else ans=max(ans,c);
              }
          }
      }
      cout<<s.size()-ans<<endl;
  }
}
