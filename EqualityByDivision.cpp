#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
   // sort(arr,arr+n);
    vector<int> vec[200005];

    for(int i=0;i<n;i++)
    {
        int m=arr[i];
        int j=0;

        while(m>0)
        {
            vec[m].push_back(j);
            j++;
            m=m/2;
        }
        vec[0].push_back(j);
    }
    long long int ans=INT_MAX,sum=0;

    for(int i=0;i<200005;i++)
    {
        sort(vec[i].begin(),vec[i].end());
        sum=0;
        if(vec[i].size()>=k)
        {
            for(int h=0;h<k;h++)
            {
                sum+=vec[i][h];
            }
            ans=min(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}
