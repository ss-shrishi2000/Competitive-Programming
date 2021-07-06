#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(a[i],mx);
            mn=min(a[i],mn);
        }
        int a1=n,a2=n,a3=n,a4=n;
        int mxi = 1 + max_element(a,a+n)-a;
        int mni = 1 + min_element(a,a+n)-a;
        //cout<<mni << " " <<mxi<<endl;
        a1=min(a1,n-mxi);
    }
    return 0;
}
