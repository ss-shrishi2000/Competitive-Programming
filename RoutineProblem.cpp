#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;cin>>a>>b>>c>>d;
    int n1,d1;
    if(a*d<=b*c)
    {
      n1=(b*c-a*d);
      d1= b*c;
      int g=__gcd(n1,d1);

      cout<<n1/g<<"/"<<d1/g;
    }
    else{
      n1=(a*d-b*c);
      d1= a*d;
      int g=__gcd(n1,d1);

      cout<<n1/g<<"/"<<d1/g;
    }
    return 0;
}
