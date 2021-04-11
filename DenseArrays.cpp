#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            int mx=max(a[i],a[i+1]);
            int mn=min(a[i],a[i+1]);
            if(mx<=2*mn)
                continue;
            else{
                while(mx>2*mn)
                {
                    mn=mn*2;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
