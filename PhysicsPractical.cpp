#include<bits/stdc++.h>
int a[200005];
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=300005;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    
    sort(a+1,a+n+1);
    int j=1;
    for(int i=1;i<=n;i++)
    {
        while(j<n&&(a[j+1]<=2*a[i]))j++;
        k=min(k,n+i-j-1);
    }
    cout<<k;
    return 0;
}
