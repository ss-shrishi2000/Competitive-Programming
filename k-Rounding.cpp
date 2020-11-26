#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int p=pow(10,k);
    long long int pro=p*n;
    long long int g=__gcd(p,n);
    long long int ans= pro/g;
    cout<<ans;
    return 0;
}
