#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;cin>>x>>y;
    int q=0;
    if(x>0 and y>0)q=1;
    else if(x<0 and y>0)q=2;
    else if(x<0 and y<0)q=3;
    else q=4;
    int d=sqrt(x*x+y*y);
    double d1=sqrt(x*x+y*y);
    if(q%2!=0)
    {
       if(d==d1)cout<<"black";
       else if(d%2!=0)cout<<"white";
       else cout<<"black";
    }
    else{
        if(d==d1)cout<<"black";
        else if(d%2!=0)cout<<"black";
        else cout<<"white";
    }
}
