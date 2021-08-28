#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ind=n-1;
    while(ind>0 && a[ind-1]>= a[ind]) ind-=1;
    while(ind>0 && a[ind-1]<=a[ind]) ind-=1;
    cout<<ind<<endl;
    }
    return 0;
}
