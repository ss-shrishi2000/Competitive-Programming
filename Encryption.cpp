#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    long long int a[n+5],s[n+5],sum=0;
    s[0]=0;
    for(int i=1;i<=n;i++){cin>>a[i];sum+=a[i];s[i]=s[i-1]+a[i];}
    vector<long long int> b;
    for(int i=1;i<n;i++){
        b.push_back(s[i]%k+((sum-s[i])%k));
    }
    long long int m=0;
    for(int i=0;i<b.size();i++)
    {
        if(m<b[i])m=b[i];
    }
    cout<<m;
    return 0;
}
