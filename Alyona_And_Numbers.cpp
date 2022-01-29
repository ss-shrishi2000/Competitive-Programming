#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int ans=0;
    
    for(int i=1;i<=m;i++)
        ans+=(n+(i%5))/5;
    
    cout<<ans;
    return 0;
}
