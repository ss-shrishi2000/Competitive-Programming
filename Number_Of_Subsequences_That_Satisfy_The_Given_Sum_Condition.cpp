#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
int main()
{
    int n,target,x;
    cin>>n>>target;
    vector<int> nums;

    for(int i=0;i<n;i++)
        cin>>x , nums.push_back(x);

    long long int ans=0 , ans1=0 ;
    int left=0,right=nums.size()-1;

    sort(nums.begin() , nums.end());
    int power[nums.size()+2];
    power[0]=1;

    for(int i=1;i<=nums.size();i++)
    {
        power[i] = (2*power[i-1])%MOD;
    }

    while(left<=right)
    {
        if(nums[left] + nums[right] <=target )
        {
            ans += power[right-left];
            ans=ans%MOD;
            left++;
        }
        else if( nums[left] + nums[right] > target )
                right--;
    }
    cout<<max(ans1,ans);
    return 0;
}
