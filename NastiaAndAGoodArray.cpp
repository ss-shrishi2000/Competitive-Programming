#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<n/2<<endl;
    for(int i=0;i<n-1;i+=2)
    {
        cout<<(i+1)<<" "<<(i+2)<<" "<<min(a[i],a[i+1])<<" "<<1000000000+9<<endl;
    }

    }
    return 0;
}
