#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    map<int, int> mp;
    for(int i=0; i<n; i++)
        cin>>a[i], mp[a[i]]++;

    sort(a,a+n);
    int mx = a[n-1];
    for(int i = 1; i*i<=mx; i++)
    {
        if(mx%i==0)
        {
            int div = i;
            mp[div]--;
            if(mx/i != i)
            {
                mp[mx/i]--;
            }
        }
    }
    int m1 = INT_MIN;
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>0)
        {
            m1 = max(m1, it->first);
        }
    }
    cout << mx << " " << m1 << endl;
    return 0;
}
