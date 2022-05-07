#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int strength, intel, exp;
        cin>> strength >> intel >> exp;
        int low = 0, high = exp;
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(mid + strength > intel + (exp - mid))
            {
                high = mid-1;
            }
            else
                low = mid+1;
        }
        cout<< abs(high - exp) <<endl;
    }
    return 0;
}
