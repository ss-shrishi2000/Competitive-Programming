#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    long long int ans=0;
    while(n--)
    {
        cin>>s;
        if(s=="Icosahedron")
            ans+=20;
        else if(s=="Dodecahedron")
            ans+=12;
        else if(s=="Octahedron")
            ans+=8;
        else if(s=="Tetrahedron")
            ans+=4;
        else
            ans+=6;
    }
    cout<<ans;
    return 0;
}
