#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
    long long n,a,b;cin>>n>>a>>b;
    long long c1=n*a,c2,c3;
    if(n%2==0){c2=(n/2)*b;}
    else {c2=(n/2)*b+(n%2)*a;}
    if(c2!=0)cout<<min(c1,c2)<<endl;
    else cout<<c1<<endl;
}
}
