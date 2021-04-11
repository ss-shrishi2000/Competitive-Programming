#include<bits/stdc++.h>
using namespace std;
bool is_cube(long long int j)
{
    long long int m=cbrt(j);
    if(m*m*m == j)
        return true;
    else
        return false;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int x;
        cin>>x;
        bool f=false;
        if(x==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(long long int j=1; j<=cbrt(x)+2 ;j++)
        {
            long long int k= x-(j*j*j);
           // cout<<j<<" "<<2<<endl;
           // cout<<k<<" "<<1<<endl;
            if(is_cube(k) && k>0)
            {
                f=true;
                break;
            }
        }
        if(f==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
