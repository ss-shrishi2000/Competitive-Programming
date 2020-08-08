#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
      int n;cin>>n;
      string s,a,b,m;cin>>s;
      //first check whether it is already an good string or not
      for(int i=0;i<n/2;i++)m[i]='a';
      if(s.substr(0,n/2)==m || (s.substr(n/2,n/2)==m))
      {
          cout<<"y"<<endl;
      }
      for(int i=0;i<n/2;i++)
      {
          a[i]='a';b[i]='b';
      }
      for(int i=n/2;i<n;i++)
      {
          b[i]='a';a[i]='b';
      }
      int m1=0,m2=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]!=a[i])m1++;
          if(s[i]!=b[i])m2++;
      }
      cout<<min(m1,m2)<<endl;
  }
}
