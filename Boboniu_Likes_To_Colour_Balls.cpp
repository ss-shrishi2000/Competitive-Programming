#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long int r,g,b,w;
    cin>>r>>g>>b>>w;
    w=w%2+r%2+b%2+g%2;
    cout<<((w<2 || w>2 && r*g*b)?"YES\n":"NO\n");
    }
    return 0;
}
