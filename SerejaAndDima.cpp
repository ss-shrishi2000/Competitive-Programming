#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    long long d=0,s=0;
    int left=0,right=n-1,i=1;
    while(left<=right)
    {
        int m=max(a[left],a[right]);
        if(i%2!=0)s+=m;
        else d+=m;
        i++;
        if(m==a[left])left++;
        else right--;
    }
    cout<<s<<" "<<d;
    return 0;
}
