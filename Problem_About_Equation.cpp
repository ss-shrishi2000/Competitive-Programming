#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,s ,t=0;
    cin>>n>>s;
    double a[n] , f=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i] , t+=a[i];
        if(f<a[i])
            f=a[i];
    }
    double g = double((t+s)/(double)n);
    if( g<f )
    {
        cout<<-1;
        return 0;
    }
    cout<<fixed<<setprecision(6);
    for(int i=0;i<n;i++)
    {
        cout<<g-a[i]<<endl;
    }
    return 0;
}
