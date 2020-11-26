#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;cin>>n;
   int x,y;
   map<int,int> mp;
   while(n--)
   {
      cin>>x>>y;
      mp[x]++;
      mp[y]--;
   }
   int prevmax=0,yalive=0,t=0;
   for(auto it=mp.begin();it!=mp.end();it++)
   {
       prevmax+=it->second;
       if(prevmax>t)
       {
           t=prevmax;
           yalive=it->first;
       }
   }
   cout<<yalive<<" "<<t;
   return 0;
}
