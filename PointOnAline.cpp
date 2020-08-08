#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;cin>>n>>d;
    int a[n];
    long long int ans=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
      long long int c=upper_bound(a,a+n,a[i]+d)-a;
      c-=i;
      if(c>=3)
        {
            c-=2;
            ans+=(c*(c+1))/2;
        }
    }
    cout<<ans;
    return 0;
}
