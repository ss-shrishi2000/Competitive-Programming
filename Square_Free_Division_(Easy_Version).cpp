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
        int arr[n];
        int occ = 0, ans = 0;
        map<int,int> mp;
        occ+=1;
        ans+=1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            for(int j=2;j*j<=arr[i];j++)
            {
                if(arr[i] % (j*j) == 0)
                {
                    while(arr[i] % (j*j)==0)
                    {
                        arr[i] = arr[i] / (j*j);
                    }
                }
            }
            if(mp[arr[i]] == occ)
                occ++ , ans++;
            mp[arr[i]] = ans;
        }
        cout<<ans<<endl;
    }
}
