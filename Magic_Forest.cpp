#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;cin>>n;
    int ans=0;
    for(a=1;a<=n;a++)
        for(b=a;b<=n;b++)
        {
            c=a^b;
            if(c>=b and c<=n and a+b>c)ans++;
        }
        cout<<ans;
        return 0;
}
