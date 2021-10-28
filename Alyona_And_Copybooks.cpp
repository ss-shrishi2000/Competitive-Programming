#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c;cin>>n>>a>>b>>c;
    if(n%4==0){
        cout<<0;
        return 0;
    }
    long long int diff= 4*((n+3)/4) - n;
    if(diff==1)
        cout<<min(a ,min(3*c,b+c));
    else if(diff==2)
        cout<<min(2*a,min(2*c, b));
    else
        cout<<min(3*a , min(b+a,c));

    return 0;
}
