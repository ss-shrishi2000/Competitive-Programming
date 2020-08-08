#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int c2=0,c3=0;
        int y=n,x=n;
        while(y%2==0)
        {
            y=y/2;
            c2++;
        }
        while(y%3==0)
        {
            y/=3;
            c3++;
        }
        if(c2>c3 ||(y!=1))cout<<-1<<endl;
        else{
            cout<<2*c3-c2<<endl;
        }
    }
    return 0;

}
