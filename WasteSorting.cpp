#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int c1,c2,c3;cin>>c1>>c2>>c3;
        int paper,plastic,general,a4,a5;
        cin>>paper>>plastic>>general>>a4>>a5;
        if(paper<=c1 && plastic<=c2 && general<=c3)
        {
            c1-=paper;
            c2-=plastic;
            c3-=general;
            if(c1+c3<a4)
                cout<<"NO"<<endl;
            else if(c2+c3<a5)
                cout<<"NO"<<endl;
            else{
                a4-=c1;
                a5-=c2;
                if(a4+a5>c3)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
}
