#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    long long int l=-2000000000,r=2000000000;
    string sign,ans;
    int x;
    while(t--)
    {
       cin>>sign>>x>>ans;
       if(ans=="N")
       {
           if(sign=="<")
            sign=">=";
           else if(sign==">")
            sign="<=";
           else if(sign=="<=")
            sign=">";
           else if(sign==">=")
            sign="<";
       }
       if(sign=="<")
       {
           if(r>=x)
            r=x-1;
       }
       else if(sign==">")
       {
           if(l<=x)
            l=x+1;
       }
       else if(sign=="<=")
       {
           if(r>x)
            r=x;
       }
       else if(sign==">=")
       {
           if(l<x)
            l=x;
       }

    }
    if(l>r)
        cout<<"Impossible";
    else
        cout<<l;
    return 0;
}
