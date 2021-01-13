#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;cin>>n;
    if(n==1)
    {
        cin>>x;
        cout<<1<<endl;
        return 0;
    }
    int a[n],left[n],right[n];
    for(int i=0;i<n;i++)cin>>a[i];
    left[0]=1;
    for(int i=1;i<n;i++)
    {
        left[i]=1;
        if(a[i]>a[i-1])
            left[i]+=left[i-1];
    }
    right[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        right[i]=1;
        if(a[i]<a[i+1])
            right[i]+=right[i+1];
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
            ans=max(ans,right[i+1]+1);
        if(i>0)
            ans=max(ans,left[i-1]+1);
        if(i>0 && i<n-1)
        {
            if(a[i+1]-a[i-1]>=2)
                ans=max(ans , left[i-1]+right[i+1]+1 );
        }
    }
    cout<<ans<<endl;
    return 0;
}
