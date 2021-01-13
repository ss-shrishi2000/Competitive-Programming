#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        long long int sum=0,s1=0,s2=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            s1+=(a[i]+x-1)/x;
        }
        s2=(sum+x-1)/x;
        cout<<s2<<" "<<s1<<endl;
    }
}
