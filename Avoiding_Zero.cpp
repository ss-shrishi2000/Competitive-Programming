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
        int a[n];
        long long int s=0,s2=0;
        for(int i=0;i<n;i++)
            cin>>a[i],s+=a[i];
        
        if(s==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(a,a+n);
        bool f=true;
        cout<<"YES"<<endl;
        if(s<0)
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
        else
            for(int i=n-1;i>=0;i--)
                cout<<a[i]<<" ";
            cout<<endl;
     }
}
