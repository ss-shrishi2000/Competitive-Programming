#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a,b=0;
    while(n--)
    {
        cin>>a;
        cout<<a+b<<" ";
        b=max(b,b+a);
    }
    return 0;
}
