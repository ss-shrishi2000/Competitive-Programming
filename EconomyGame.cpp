#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;cin>>t;
    for(int i=0;i<=t/(1234567);i++)
    {
       for(int j=0;j<=t/123456;j++)
       {
           if(t-(i*1234567)-(j*123456)>=0&&((t-(i*1234567)-(j*123456))%1234==0))
           {
               cout<<"YES";
               return 0;
           }
       }
    }
    cout<<"NO";
    return 0;
}
