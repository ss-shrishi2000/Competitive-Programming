#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int a[n],s=0,s1=0;
        bool f=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
            if(2*s < i*(i+1))
            {
                f=false;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
