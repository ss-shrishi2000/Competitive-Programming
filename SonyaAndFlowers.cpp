#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,q;cin>>l>>q;
    int a,b;
    while(q--)
    {
        cin>>a>>b;
    }
    for(int i=0;i<l;i++)
    {
        if(i%2==0)cout<<0;
        else cout<<1;
    }
}
