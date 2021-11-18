#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli u,v;
        cin>>u>>v;
        lli x = (u*v) - (u+v)*u;
        lli y = (u+v)*v - (u*v);
        cout<<x <<" " << y << endl;
    }
    return 0;
}
