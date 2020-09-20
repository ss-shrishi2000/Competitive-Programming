#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,g=0,k,a;
    cin>>n>>a;
    l=a;
    for(long long int i=1;i<=n-1;i++){
        cin>>a;
        k=lcm(l,a);
        g=gcd(g,k);
        l=gcd(a,l);
    }
   cout<<g;
}
