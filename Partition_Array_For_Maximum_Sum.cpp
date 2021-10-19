#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,k,n;
    cin>>n>>k;
    vector<int> nums , prefix(n), suffix(n);

    for(int i=0;i<n;i++)
    {
        cin>>x;
        nums.push_back(x);
    }

    prefix[0] = nums[0];

    for(int i=1;i<nums.size();)
    {
        int j = i+k-1;
        j-=1;
        if(i==1)
            prefix[i] = max(nums[i] , prefix[i-1]);
        else
            prefix[i] = nums[i] , i++;

        while(j>=nums.size())
                j--;

        while( i<=j && i<nums.size() )
        {
                prefix[i] = max(nums[i] , prefix[i-1]);

            cout<<prefix[i] << endl;

            i++;
        }
    }
}
