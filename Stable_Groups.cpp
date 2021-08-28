#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];

    long long s=1;

    sort(a,a+n);
    long long b[n]={0};

    for (int i=1;i<n;i++)
        b[i]=a[i]-a[i-1];

    sort(b,b+n);
    for(int i=1;i<n;i++)
    {
        if(b[i]>k)
        {
            long long c=(b[i]-1)/k;
            if (m>=c) m-=c;
            else s++;
        }
    }
    cout<<s;
    return 0;
}
