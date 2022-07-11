#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a;cin>>a;
        if(a*a-4*a<0)
        {
            cout<<"N"<<endl;
        }
        else{
            cout<<"Y"<<" ";
            cout<<fixed<<setprecision(9);
            double d=sqrt(a*a-4*a);
            cout<<double((a+d)/2)<<" "<<double((a-d)/2)<<endl;
        }
    }
    return 0;
}
