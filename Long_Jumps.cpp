#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n; cin>>n;
        lli a[n+15];
        for(int i=1; i<=n; i++)
            cin>>a[i];

        lli mx = INT_MIN;
        for(int i=n; i>=1; i--)
        {
            if(a[i]+i <= n)
                a[i] += a[a[i]+i];

            mx = max(mx, a[i]);
        }
        cout<<mx<<endl;
    }
}
