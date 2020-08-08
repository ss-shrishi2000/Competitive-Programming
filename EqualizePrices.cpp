#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;int a[n];
        int diff[n]{0},sum[n]{0};
        bool f=true;
        for(int i=0;i<n;i++){cin>>a[i];diff[i]=a[i]-k;sum[i]=k+a[i];}
        int m1=*min_element(sum,sum+n);
        int m2=*max_element(diff,diff+n);
        int ans=max(m1,m2);
        for(int i=0;i<n;i++){if(abs(a[i]-ans)>k){f=false;break;}}
        if(f==false)cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
}
