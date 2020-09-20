#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long int a[n];
    long long int modd=1000000000,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)sum+=a[i];
        if(a[i]%2!=0)
        {
            modd=min(modd,abs(a[i]));
        }
    }
    if(sum%2!=0)cout<<sum;
    else cout<<sum-modd;
    return 0;
}
