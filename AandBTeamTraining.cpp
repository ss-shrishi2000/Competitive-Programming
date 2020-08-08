#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;cin>>x>>n;
    int m1=max(x,n);
    int m2=min(x,n);
    if(x==n){cout<<(x+n)/3;return 0;}
    if(m1/2>m2)cout<<m2;
    else if(m1/2==m2)cout<<(m1+m2)/3;
    else{
    int p=min(m2,(m1+m2)/3);
    cout<<p;
    }
}
