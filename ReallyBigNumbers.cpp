#include<bits/stdc++.h>
using namespace std;
long long int sum_dig(long long int n)
{
    long long int s=0;
    while(n!=0)
    {
        s+=n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    long long int n,s;
    cin>>n>>s;
    long long int ans;
    long long int low=1,high=n ,mid ;
    while (low <= high)
    {
        mid =(high+low) / 2;

        if(mid - sum_dig(mid) >=s )
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
       // cout<<high<<" "<< mid << " "<< low <<endl;
    }
    ans=n-low+1;
    cout<<ans<<endl;
    return 0;
}
