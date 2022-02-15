#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        long long int mx = INT_MIN;
        long long int s = 0;
        for(int j = n-1; j>=0; j--)
        {
            s+=arr[j];
            //cout<<s<<endl;
            mx = max(s,mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
