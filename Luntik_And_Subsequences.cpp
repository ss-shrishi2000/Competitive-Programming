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
        long long int arr[n];
        map<long long int,long long int> hsh;
        for(int i=0;i<n;i++)
            cin>>arr[i] , hsh[arr[i]]++;

        long long int val = pow(2,hsh[0]);
        long long int ans = val*hsh[1];
        cout<<ans<<endl;
    }
    return 0;
}
