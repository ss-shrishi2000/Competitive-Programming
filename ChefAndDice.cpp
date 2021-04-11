#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long s=0;
        s= (n/4)*44;
        long long r=n%4;
        if(n>=4)
        {
            if(r==0)
                s+=16;
            else if(r==1)
                s+=32;
            else if(r==2)
                s+=44;
            else
                s+=55;

            cout<<s<<endl;
        }
        else{
            if(r==1)
                cout<<20<<endl;
            else if(r==2)
                cout<<36<<endl;
            else
                cout<<51<<endl;
        }
    }
    return 0;
}
