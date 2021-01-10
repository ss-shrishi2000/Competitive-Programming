#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        if(n==k)
            cout<<0<<endl;
        else if(n<k)
            cout<<(k-n)<<endl;
        else
        {
            if(n%2==k%2)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
    }
}
