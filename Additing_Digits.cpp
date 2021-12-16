#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n;cin>>a>>b>>n;
    long long int x=a;
    if(a%b==0)
    {
        cout<<a;
        for(int j=n;j>0;j--)
            cout<<0;
        return 0;
    }
    int div=-1;
    for(int i=0;i<=9;i++)
    {
        long long int p=x*10+i;
        if(p%b==0)
        {
            div=i;
            break;
        }
        //cout<<div<<endl;
        //cout<<p<<endl;
    }
    if(div==-1)
    {
        cout<<-1;
        return 0;
    }

    cout<<a<<div;
    for(int j=n-1;j>0;j--)cout<<0;
    return 0;
}
