#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long n;cin>>n;
    auto s=0ll,t=0ll,q=n*(n+1)/2;
    for (auto i=0;i<n;i++)
    {
    int a;cin>>a;
    if(a>0)t++;
    else
        t=i-t;
    s+=t;
    }
    cout<<q-s<<' '<<s;
}
