#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x;
   cin>>n;
   int r0=0,r2=0,r1=0;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       if(x%3==0)
          r0++;
       else if(x%3==1)
          r1++;
       else
          r2++;
   }
   cout<<r0/2+min(r1,r2);
}
