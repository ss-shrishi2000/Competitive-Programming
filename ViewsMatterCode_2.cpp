#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    long long int n,m,s1=0,k=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i],s1+=a[i]-1;
     if(n==1)
    {
        cout<<0;
        return 0;
    }
    sort(a,a+n);

    for(int i=n-1;i>=0;i--)
    {
        if(!a[i])
        break;
        else if(a[i]>a[i-1])
            s1-=(a[i]-(a[i-1]+1));

        else
            a[i-1]=a[i]-1;
    }
    cout<<s1;
    return 0;
}
