#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int n,m;cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=0;i<=n;i++)cin>>a[i];
    for(int j=0;j<=m;j++)cin>>b[j];
    if(n>m && (a[0]*b[0]>0))cout<<"Infinity";
    else if(n>m && (a[0]*b[0]<0))cout<<"-Infinity";
    else if(n<m)cout<<"0/1";
    else if(n==m && (a[0]==b[0]))cout<<"1/1";
    else{
        if(a[0]==b[0])cout<<"0/1";
        else{
            int g=gcd(a[0],b[0]);
            int c=a[0]/g;
            int d=b[0]/g;
            if(c*d>0)cout<<c<<"/"<<d;
            else {
            int f=abs(c),h=abs(d);
            cout<<"-"<<f<<"/"<<h;
            }
        }
    }
}
