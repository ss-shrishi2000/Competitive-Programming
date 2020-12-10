#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt=0,x=100;
    while(n!=0)
    {
      cnt+=n/x;
      n=n%x;

      if(x==100)
        x=20;
      else if(x==20)
        x=10;
      else if(x==10)
        x=5;
      else
        x=1;
    }
    cout<<cnt;
    return 0;
}
