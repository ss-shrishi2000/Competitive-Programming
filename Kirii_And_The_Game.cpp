#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,x,y,k,ans;cin>>l>>r>>x>>y>>k;
    //exp=k*cost l<=exp<=r
    long long int exp;
    for(int j=x;j<=y;j++)
    {
    exp=k*j;
      if(exp>=l && exp<=r){
          cout<<"YES";
          return 0;
      }
    }
    cout<<"NO";
    return 0;
}
