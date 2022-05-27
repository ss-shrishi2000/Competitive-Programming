#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int c1, c2, c3;
        cin>>c1>>c2>>c3;
        int a1, a2, a3, a4, a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        int r1 = c1 - a1;
        int r2 = c2 - a2;
        int r3 = c3 - a3;
        if(r1<0 || r2<0 || r3<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            bool f=true;
            if(a4>0)
            {
                if(r1>=a4)
                {
                    r1-=a4;
                }
                else if(r1+r3>=a4)
                {
                    r1-=a4;
                    r3+=r1;
                }
                else
                {
                    f=false;
                }
            }
            if(a5>0)
            {
                if(r2>=a5)
                {
                    r2-=a5;
                }
                else if(r2+r3>=a5)
                {
                    r2-=a5;
                    r3+=r2;
                }
                else
                {
                    f=false;
                }
            }
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
