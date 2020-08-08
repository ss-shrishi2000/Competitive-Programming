#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int p=n-k+1;
        int q=n-2*(k-1);
        if(p%2!=0 and p>0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)cout<<1<<" ";
            cout<<p<<endl;
        }
        else if(q%2==0 and q>0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)cout<<2<<" ";
            cout<<q<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
