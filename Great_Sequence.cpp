#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        map<int, int> mp;
        for(int i=0; i<n; i++)
            cin>>a[i], mp[a[i]]++;

        sort(a,a+n, greater<int>());
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]>0)
            {
            //cout<<a[i] << " " << i << endl;
            if(a[i]%x==0 && mp[a[i]/x]>0)
            {
                mp[a[i]]--;
                mp[a[i]/x]--;
            }
            else
                ans++, mp[a[i]]--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
