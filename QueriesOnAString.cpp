#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;int q;
    cin>>s>>q;
    while(q--)
    {
        int a,b,c;cin>>a>>b>>c;
        c%=(b-a+1);
        rotate(&s[a-1],&s[b-c],&s[b]);
    }
    cout<<s;
}
