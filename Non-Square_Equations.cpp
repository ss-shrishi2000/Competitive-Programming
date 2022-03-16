#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli sum(lli x)
{
    lli s=0;
    while(x>0)
    {
        s+= x%10;
        x = x/10;
    }
    return s;
}
int main()
{
    lli n;
    cin>>n;
    for(int s = 0; s<= 90; s++)
    {
        lli D = s*s + 4*n;
        lli d = sqrt(D);
        if(d*d == D)
        {
            if( (d-s)%2==0 && sum((d-s)/2)==s)
            {
                lli x = (d-s)/2;
                cout<<x;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
