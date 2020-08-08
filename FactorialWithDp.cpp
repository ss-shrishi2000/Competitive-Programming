#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t,n,a[100001],i,mod=1000000007;
a[0]=1;
for(i=1;i<=100000;i++)a[i]=(a[i-1]*i)%mod;
cin >> t;
while(t--)
{
cin >> n;
cout << a[n] << "\n";
}
}
