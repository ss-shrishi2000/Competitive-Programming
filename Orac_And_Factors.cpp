#include<bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
    int c=0;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)c++;
        if(c>0){return false;}
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        if(isprime(n)==true){cout<<2*n+(k-1)*2<<endl;}
        else{
            if(n%2==0)cout<<n+k*2<<endl;
            else{
                    for(int i=2;i<=sqrt(n);i++)
                    {
                        if(n%i==0)
                        {
                            cout<<i+n+(k-1)*2<<endl;
                            break;
                        }
                    }
            }
        }
    }
}
