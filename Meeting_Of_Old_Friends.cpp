#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    long long int f=0,ans;
    long long int l=max(l1,l2);
    long long int r=min(r1,r2);
    if(r<l)
    {
        cout<<0;
    }
    else{
    if(k>=l && k<=r){
    ans= r - l;
    }
    else{
    ans= r - l+1 ;
    }
    cout<<ans;
    }
    return 0;
}
