#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,s1=0,k=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>k)
              k++;
        s1+=a[i]-1;
       // cout<<s1<<endl;
    }
    if(k==a[n-1])
        s1+=k-1;
    else
        s1+=k;

     cout<<s1<<endl;
     return 0;
}
