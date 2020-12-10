#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,d;cin>>n>>d;
        int a[n];
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]>=80 || a[i]<=9)cnt1++;
        else cnt2++;
        }
        long long int ans=0;
        if(cnt1%d==0)
        {
            ans+=cnt1/d;
        }
        else{
            ans+=(cnt1+(d-1))/d;
        }
        if(cnt2%d==0)
        {
            ans+=cnt2/d;
        }
        else{
            ans+=(cnt2+(d-1))/d;
        }
        cout<<ans<<endl;
    }
    return 0;
}
