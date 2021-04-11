#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];

    int ans=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j] && i!=j)
                {
                    ans--;
                    break;
                }
        }
    }
    cout<<ans;
    return 0;
}
