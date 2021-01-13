#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,d;cin>>n>>d;
        long long int x=n/2;
        if(d<=n)
            cout<<"YES"<<endl;
        else{
            long long int k= (d+x)/(x+1);
            if(k+x <= n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
