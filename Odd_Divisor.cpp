#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n;
        bool f=false;
        while(n%2==0)
            n=n/2;

        if(n & (n-1) ==0)
            f=false;
        else
            f=true;

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
