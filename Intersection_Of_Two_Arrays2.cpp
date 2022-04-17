#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    int l=1,r=num,ans=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(mid*mid==num)
            {
                ans=mid;
                break;
            }
            else if(mid*mid>num)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        bool f;
        if(ans==-1)f=false;
        else f=true;
    cout<<f;
}
