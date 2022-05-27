#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t; cin>>t;
    while(t--)
    {
        lli n; cin>>n;
        bool f = true;
        if(n==3|| n==5 || n==7 || n==9)
        {
            cout<<"YES"<<endl;
            continue;
        }

        while(n%2==0 && n>0)
            n=n/2;

        if(n==1)
            f = false;

        if(f)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
