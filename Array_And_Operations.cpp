#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+5];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr,arr+n);
        int ans=0, i;
        for(i=0; i<n-k; i++)
        {
            if(i<n-2*k)
            {
               ans += arr[i];
            }
            else
               ans += arr[i]/arr[i+k];
        }
        cout<<ans<<endl;
    }
    return 0;
}
