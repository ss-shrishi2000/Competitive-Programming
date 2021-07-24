#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<long long int,long long int> mp , freq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            freq[mp[a[i]]]++;
        }
        long long ans=INT_MAX,a1=0;
        for(auto it:freq)
        {
            a1 = max((it.first) * (it.second) , a1);
        }
        cout<< n-a1 <<endl;
    }
    return 0;
}
