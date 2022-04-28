#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,l,r,x;
        cin>>n>>l>>r;
        vector<int> a;
        for(int i=0; i<n; i++)cin>>x, a.push_back(x);
        sort(a.begin(),a.end());

        long long ans=0;
        for(int i=0; i<n; i++)
        {
            ans += upper_bound(a.begin(), a.begin()+i, r-a[i]) - lower_bound(a.begin(), a.begin()+i, l-a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
