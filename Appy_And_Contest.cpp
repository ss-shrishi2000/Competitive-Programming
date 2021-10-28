#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    
    return (gcd(b,b%a));
}
long long lcm(int a,int b,int g)
{
    long long p=(a*b)/g;
    return p;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,a,b,k;
        cin>>n>>a>>b>>k;
        long long g=gcd(a,b);
        long long l=lcm(a,b,g);
        
        long long ans=n/a+n/b-2*(n/l);
        if(ans>=k)
            cout<<"Win"<<endl;
        else 
            cout<<"Lose"<<endl;
    }
}
