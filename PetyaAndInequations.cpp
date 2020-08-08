#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y;cin>>n>>x>>y;
    long long p=(y-n+1)*(y-n+1);
    if((p+n-1<x)||(y-n+1<=0))cout<<-1<<endl;
    else{
    cout<<y-n+1<<endl;
    for(int i=0;i<n-1;i++)cout<<1<<endl;
    }
}
