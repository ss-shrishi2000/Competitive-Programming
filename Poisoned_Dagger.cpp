#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(vector<ll> a, int n, ll k)
{
    ll dam = 0, last = 0, new_dam = 0;
    for(int i = 0; i < n; i++)
    {
        if(i==0)
            dam += k;
        else
        {
            last = a[i-1] + k;
            if(last >= a[i])
            {
            new_dam = a[i] + k;
            ll changes = new_dam - last;
            dam += changes;
            }
            else
                dam += k;
        }
    }
    return dam;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll h, x;
        cin>>n>>h;
        vector<ll> v;
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            v.push_back(x);
        }

        ll low = 1, high = 1e18;
        while(low <= high)
        {
            ll mid = (low + high)/2;
            ll tr = calc(v, n, mid);
            //cout<<tr<<" "<<mid<<endl;

            if(tr >= h)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout<<low<<endl;
    }
    return 0;
}
