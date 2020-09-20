#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ans=1;cin>>n;
    ans=n-(n/2)-(n/3)-(n/5)-(n/7)+(n/(2*3))+(n/(3*5))+(n/(5*7))+(n/(2*7))+(n/(2*5))+(n/(3*7))-(n/(2*3*5))-(n/(3*5*7))-(n/(2*5*7))-(n/(2*3*7))+(n/(2*3*5*7));
    cout<<ans;
    return 0;
}
