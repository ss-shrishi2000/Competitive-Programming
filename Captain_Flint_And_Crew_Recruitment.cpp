#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n<=30)cout<<"NO"<<endl;
        else 
        {
        if(n-30==6)
            cout<<"YES"<<endl<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
        else if(n-30==14)
            cout<<"YES"<<endl<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
        else if(n-30==10) 
            cout<<"YES"<<endl<<6<<" "<<15<<" "<<10<<" "<<n-31<<endl;
          else
             cout<<"YES"<<endl<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
        }
    }
}
