#include<bits/stdc++.h>
using namespace std;
string a,b;
int x,y,ans=0;
int check(int s)
{
    for(int i=0;i<x;i++)
    {
        if(a[i]!=a[i%s])
            return 0;
    }
    for(int i=0;i<y;i++)
    {
        if(b[i]!=a[i%s])
            return 0;
    }
    return 1;
}

int main()
{
   cin>>a>>b;
   x=a.size();
   y=b.size();
   int g=__gcd(x,y);
   for(int i=1;i*i<=g;i++)
   {
       if(g%i==0)
       {
          ans+=check(i);
          if(i*i!=g)
            ans+=check(g/i);
       }
   }
   cout<<ans<<endl;
   return 0;
}
