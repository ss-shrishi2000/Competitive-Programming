#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;cin>>n;
string s=to_string(n);
int t;
for(int i=0;i<s.length();i++)
{
    t+=s[i]-48;
}
if(t%4==0)cout<<n;
else{
        bool f=false;
    while(f==false){
    n++;
    int p=0;
      string s1=to_string(n);
      for(int i=0;i<s1.length();i++)
      {
          p+=s1[i]-48;
      }
      if(p%4==0)f=true;
    }
    cout<<n;
}
}
