#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,k;
    int n,m;cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];

    pair<long long,long long> x[n], y[n];
    long long odd, even;
    odd =0, even = 0;
    for(i=0;i<n;i++)
    {
        x[i]={even,odd};

        if((i+1)%2)
            odd+=(long long)a[i];
        else
            even+=(long long)a[i];
    }
    odd =0, even = 0;
    for(i=n-1;i>=0;i--)
    {
        y[i]={even,odd};

        if((i+1)%2)
            odd+=(long long)a[i];
        else
            even+=(long long)a[i];
    }
    int cnt=0;
    if(y[0].first == y[0].second)
        cnt++;
    if(n>1 && x[n-1].first==x[n-1].second)
        cnt++;

    for(i=1;i<n-1;i++)
    {
        even = x[i].first+y[i].second;
        odd = x[i].second+y[i].first;

        if(even==odd)
            cnt++;
    }
    cout<<cnt;

    return 0;
}
