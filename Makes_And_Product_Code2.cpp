#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long int k=0;
    sort(a,a+n);
    long long int x=a[2];
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            k++;
    }
    long long int ans=k;
    if(x==a[0])
        ans=(ans*(ans-1)*(ans-2))/6;
    else if(x==a[1])
        ans=(ans*(ans-1))/2;

    cout<<ans;
    return 0;
}
