#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,p,q;
     cin>>n>>p>>q;
     string s;
     cin>>s;
     int x,y;
     y=-1;
     for( x=0;x*p<=n;x++)
     {
          int z=n-p*x;
          if( z%q==0 )
          {
             y=z/q;
             break;
          }
     }
     if(y==-1)
     {
         cout<<"-1";
         return 0;
     }
     cout<<x+y<<endl;
     while( x-- )
     {
         cout<<s.substr(0,p)<<endl;
         s.erase(0,p);
     }
     while(y--)
     {
         cout<<s.substr(0,q)<<endl;
         s.erase(0,q);
     }
     return 0;
}
