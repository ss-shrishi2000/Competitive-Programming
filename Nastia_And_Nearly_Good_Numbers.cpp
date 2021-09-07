#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long int pr;
        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        long long x=a,y=a*b,z;
        z=x+y;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
