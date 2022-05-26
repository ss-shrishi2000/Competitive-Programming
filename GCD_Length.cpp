#include<bits/stdc++.h>
using namespace std;
int calc(long long int n)
{
    int d=0;
    while(n!=0)
    {
        n=n/10;
        d++;
    }
    return d;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        long long int x=1,y=1;
        int m=b-c;                              // m = number of digits formed by 3's
        while(calc(x)!=a)
        {
            x*=2;
        }
        while(calc(y)!=c)
        {
            y*=2;
        }
        while(calc(y)!=b)
        {
            y*=3;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
