#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[179];
    for(int i=0;i<n;i++)
          cin>>s[i];
    int ans =1e9;
    for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<n;j++)
    {
      int c=(s[j]+s[j]).find(s[i]);
      c==string::npos?ans=-1:cnt+=c;
    }
    ans = min(ans,cnt);
  }
  cout<<ans<<endl;
  return 0;
}
