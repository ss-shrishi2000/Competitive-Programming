#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int mn =INT_MAX ,cnt=0,ans=0;
        for(int i=n-1;i>=0;i--)
        {
           if(mn < arr[i])
           {
               cnt++;
           }
           mn=min(mn, arr[i]);
        }
        cout<<cnt<<endl;
    }
}
