#include<bits/stdc++.h>
using namespace std;
bool isprime(long long int n)
{
    int c=0;
    for(int i=2;i<=sqrt(n)+1;i++)
    {
        if(n%i==0)c++;
        if(c>0)
            return false;
    }
    return true;
}
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else{
        if(isprime(n)==true)
        {
            cout<<1;
            return 0;
        }
        bool f=false;
        long long int x;
        for(int i=3;i<=(sqrt(n)+1);i+=2)
        {
            if(n%i==0)
            {
            x=i;
            f=true;break;
            }
        }
        if(f==true)
        {
            long long int r=n-x;
            cout<<r/2+1;
        }
    }
    return 0;
}
