#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t=0;cin>>a>>b;
    while (a >0 && b>0)
    {
        if (a>b)swap(a,b);
        a++;
        b-=2;
        if (a>=0 && b>=0)t++;
    }
    cout<<t;
    return 0;
}
