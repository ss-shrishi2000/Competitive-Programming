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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n==1)
        {
             cout<<arr[0]<<endl;
             continue;
        }
        sort(arr,arr+n);
        int pref = arr[0];
        for(int i=1;i<n;i++)
            pref = max(pref , arr[i]-arr[i-1]);

        cout<<pref<<endl;
    }
    return 0;
}
