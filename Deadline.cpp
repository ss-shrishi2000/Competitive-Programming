#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;cin>>t;
 while(t--)
  {
   int n,d;cin>>n>>d;
   int x=(n/2);
   int p=(d%(x+1)==0)?(d/(x+1)):(d/(x+1))+1;
   if(p+x<=n)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  }
}
