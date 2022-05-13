#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    cin>>s;
    if(n%2!=0)
        cout<<"0";
    else
    {
    bool f=true;
    int c=0,p=0;
    for(int i=0;i<n;i++)
    {
      c=0;
      if(s[i]=='(')
          s[i]=')';
      else 
          s[i]='(';
        
      for(int j=i+1;j<n;j++)
      {
          if(s[j]=='(')c++;
          else c--;
          if(c<0){break;}
      }
      if(c==0)
          p++;
      if(s[i]=='(')
          s[i]=')';
      else 
          s[i]='(';
    }
    cout<<p<<endl;
    }
}
