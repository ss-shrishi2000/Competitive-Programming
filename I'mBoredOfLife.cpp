#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,p=1;
    cin>>a>>b;
    long long int c=min(a,b);
    for(int i=2;i<=c;i++)p*=i;
    cout<<p<<"\n";
    return 0;
}
