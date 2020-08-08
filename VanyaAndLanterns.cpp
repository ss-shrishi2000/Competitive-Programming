#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int m=0,p=a[0],l=k-a[n-1];
    m=max(m,2*max(p,l));
    for(int i=0;i<n-1;i++)
    {
        m=max(m,a[i+1]-a[i]);
    }
    printf("%lf",m/2.0);
    return 0;
}
