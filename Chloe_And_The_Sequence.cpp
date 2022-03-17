#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,x=1;cin>>n>>k;
    for(int i=1;i<n;i++)
    {
        x=x*2+1;
    }
    long long int l=1,h=x;
    while(h>l+1)
    {
        long long int m=(l+h)/2;
        if(m>k)
        {
            h=m-1;n--;
        }
        else if(m<k){
        l=m+1;
        n--;
        }
        else break;
    }
    cout<<n;
    return 0;
}
