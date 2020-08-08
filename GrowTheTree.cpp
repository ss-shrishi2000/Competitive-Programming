#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long int a[n];
    long long int s=0,k=0;
    for(int i=0;i<n;i++){cin>>a[i];s+=a[i];}
    sort(a,a+n);
    for(int i=0;i<n/2;i++)k+=a[i];
    s-=k;
    long long int p=s*s+k*k;
    cout<<p;
}
