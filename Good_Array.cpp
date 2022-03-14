#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
   long long int tot_sum=0;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        tot_sum+=a[i];
    }

    vector<int> ind;
    for(int i=0;i<n;i++)
    {
        if((tot_sum-a[i])%2)
            continue;
        else
        {
            mp[a[i]]--;
            long long int x=(tot_sum-a[i])/2;
            if(mp[x]>0 && x<=1e6)
            {
                ind.push_back(i+1);
            }
            mp[a[i]]++;
        }
    }
    cout<<ind.size()<<endl;
    for(auto it:ind)
        cout<<it<<" ";
    return 0;
}
