#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pp pair<int,int>

void solve(string s)
{
   int n=s.size();
   int ans=0,cA=0,cB=0,cC=0;
   map<pp,int> mp;
   mp[{0,0}]=1;
   for(int i=0;i<n;i++)
   {
      if(s[i]=='A')
        cA++;
      else if(s[i]=='B')
        cB++;
      else
        cC++;

      pp tmp={cA-cB,cA-cC};
      ans+=mp[tmp];
      mp[tmp]++;
   }
   cout<<ans;
}
int32_t main()
{
  string s;cin>>s;
  solve(s);
  return 0;
}
