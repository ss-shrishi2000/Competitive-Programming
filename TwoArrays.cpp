#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,p;cin>>n>>p;
        bool f=true;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(2*a[i]<p)cout<<0<<" ";
        else if(2*a[i]>p)cout<<1<<" ";
        else{
            if(f==true){
                cout<<0<<" ";
                f=false;
            }
            else{
                cout<<1<<" ";
                f=true;
            }
        }
        }
        cout<<endl;
    }
    return 0;
}
