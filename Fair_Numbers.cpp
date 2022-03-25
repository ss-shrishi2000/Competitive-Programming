#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       long long int ans = -1, t,n;
       cin>>n;
       t = n;
        while(true)
        {
            long long int y = t;
            bool flag=true;
            while(y>0)
            {
                int rem = y%10;
                y/=10;
                if(rem==0)
                    continue;
                if(t%rem)
                {
                    flag = false;
                    break;
                }
            }
            if(flag==true)
            {
                ans = t;
                break;
            }
            else
            {
                t++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
