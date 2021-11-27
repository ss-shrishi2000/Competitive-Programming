#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a;
        map<long long int, long long int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%k==0)
                continue;
            else
                mp[ k-(a%k) ]++;
        }
        long long int ans=0;
        for(auto it:mp)
        {
            ans = max(ans, (it.second-1)*k + (it.first)+1) ;
        }
        cout<<ans<<endl;
    }
    return 0;
}
