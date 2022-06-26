#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int a[n], b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n-1; i++)
        {
            if(a[i]<(2*a[i+1]))
                b[i]=1;
            else
                b[i] = 0;
        }

        b[n-1] = 0;
        int x = 0, ans = 0;
        for(int i=0; i<k; i++)
            x+=b[i];

        if(x==k)
            ans++;
        for(int i = k; i<n; i++)
        {
            x+=b[i];
            x-=b[i-k];
            if(x==k)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
