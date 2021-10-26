#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);

        long long int s1=0,s2=0;

        if(n==1)cout<<a[0]<<endl;
        else
        {
        for(int i=n-1;i>=0;--i)
        {
            if(s1<s2)
                s1+=a[i];
            else
                s2+=a[i];
        }
        cout<<max(s1,s2)<<endl;
        }
    }
}
