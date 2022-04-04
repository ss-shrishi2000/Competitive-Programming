#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
   string a,b;cin>>a>>b;
   int l=a.size(),m=b.size();
   if(l>m)
    {
      cout<<"NO"<<endl;continue;
    }
    int i=0,j=0;
    bool f=false;
    while(i<l || j<m)
    {
      if(i<l && a[i]==b[j])
      {
        i++;j++;continue;
      }
      else if(j>0 && b[j]==b[j-1])j++;
      else {
        f=true;break;
      }
    }
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  return 0;
}
