#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,k,sum=0,cnt=0;cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a+sum<k and sum!=0)
        {
            cnt+=1;
            sum=0;
        }
        else{
            cnt+=(a+sum)/k;
            sum=(a+sum)%k;              //the remaining garbage which was less than k units and has to be thrown the next day.
        }
    }
    if(sum!=0)cout<<cnt+1;
    else cout<<cnt;
    return 0;
}
