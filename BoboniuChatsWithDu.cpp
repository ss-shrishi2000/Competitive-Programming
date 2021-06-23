#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m;
    cin>>n>>d>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int x=(n+d-1)/d;
    long long int s=0;
    int j=n-1;
    while(x>0)
    {
        s+=a[j];
        j--;
        x--;
    }
    cout<<s;
    return 0;
}
