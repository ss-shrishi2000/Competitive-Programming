#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int x=a.size() , y=b.size() , g=__gcd(x,y);
        int lcm = (x*y) / (g);
        string r1="",r2="";
        for(int i=0;i< lcm/x ;i++)
            r1+=a;
        for(int i=0;i< lcm/y ;i++)
            r2+=b;
        if(r1!=r2)
            cout<<-1<<endl;
        else
            cout<<r1<<endl;
    }
    return 0;
}
