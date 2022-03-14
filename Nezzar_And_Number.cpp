#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli n,k,x;
        cin>>n>>k;
        lli g;
        vector<lli> arr;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        lli r=arr[0];
        g=0;
        for(int i=1;i<n;i++)
        {
            arr[i]-=r;
            g=gcd(g,arr[i]);
        }
        if((k-r)%g==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
