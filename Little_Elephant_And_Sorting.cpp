#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long a,b,res=0;cin>>a;
    for(int i=2;i<=n;i++)
    {
        cin>>b;
        res+=max(0LL,a-b);
        a=b;
    }
    cout<<res;
}
