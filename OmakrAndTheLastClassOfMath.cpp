#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int c=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)c++;
        if(c>0)return false;
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(check(n)==true)
        {
            cout<<1<<" "<<(n-1)<<endl;continue;
        }
        else{
            if(n%2==0)cout<<n/2<<" "<<n/2<<endl;
            else{
                int p;
                for(int j=2;j<=sqrt(n);j++)
                {
                    if(n%j==0)
                    {
                        p=j;break;
                    }
                }
                cout<<n/p<<" "<<n-(n/p)<<endl;
            }
        }
    }
}
