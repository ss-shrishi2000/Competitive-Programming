#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,b;cin>>n>>b;
    int a[n+1];
    for(int i=0;i<n;i++){cin>>a[i];}
    int res=b;
    for(int i=0;i<n;i++)
    {
        int c=b%a[i];
        for(int j=i+1;j<n;j++)
        {
            res=max(res,(b/a[i])*a[j]+c);
        }
    }
    cout<<res;
}
