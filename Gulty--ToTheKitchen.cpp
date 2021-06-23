#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double V;
    cin>>n>>V;
    double a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    double rr=b[0]/a[0];
    for(int i=1;i<n;i++)
        rr=min(rr, b[i]/a[i] );

    cout<<fixed;
    cout<<setprecision(4);
    double ans=0;
    for(int i=0;i<n;i++)
        ans+=rr*a[i];

    cout<<min(V,ans);
    return 0;
}
