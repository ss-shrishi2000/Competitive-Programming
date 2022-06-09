#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    double p,k;
    p=n*(1.000000011);
    k=1.000000011;
    double q=pow(k,t-1);
    cout<<fixed<<setprecision(25);
    cout<<p*q;
}
