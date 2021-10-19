#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll arr[1000005] , n;
map<ll , bool> mp;

void check(int left , int right)
{
    if(left >= right)
        return;

    ll sum=0, mid;

    for(int i = left; i<right; i++)
        sum+=arr[i];

    mp[sum] = true;
    mid = (arr[left] + arr[right-1])/2;

    for(int i = left; i<right; i++)
    {
        if(arr[i]>mid)
        {
            check(left,i);
            check(i,right);
            break;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        for(int i=0;i<n;i++)
            cin>>arr[i];

        mp.clear();
        sort(arr,arr+n);
        check(0,n);

        while(q--)
        {
            ll s;
            cin>>s;
            if(mp[s]==true)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
