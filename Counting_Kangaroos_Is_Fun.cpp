#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    long long int a[n];
    for(i=1;i<=n;i++)
        cin>>a[i];
    
    sort(a+1,a+n+1);
    long long int j=n;
    for(i=(n/2);i>0;i--)
    {
        if(a[i]*2<=a[j])j--;
    }
    cout<<j;
    return 0;
}
