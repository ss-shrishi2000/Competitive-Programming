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
        int l=-1,r=-1;
        bool f=false;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i+1]-a[i])>1)
            {
                f=true;
                l=i,r=i+1;
                break;
            }
        }
        if(f==false)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl<<l+1<<" "<<r+1<<endl;
        }
    }
}
