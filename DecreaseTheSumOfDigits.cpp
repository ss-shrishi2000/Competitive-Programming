#include<bits/stdc++.h>
using namespace std;
int sum(long long int n)
{
    int s=0;
    while(n)
    {
        int rem=n%10;
        s+=rem;
        n=n/10;
    }
    return s;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,k,r=1,moves=0;
        cin>>n>>k;
        while(sum(n)>k)
        {
            if(n%10==0)
            {
                r=r*10;
                n=n/10;
            }
            else
            {
                n++;
                moves+=r;
            }
        }
        cout<<moves<<endl;
    }
    return 0;
}
