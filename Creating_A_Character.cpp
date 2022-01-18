#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int str,exp,intell;
        cin>>str>>intell>>exp;
        if(exp+str < intell)
        {
            cout<<0<<endl;
        }
        else
        {
            if(str>intell && exp==0)
            {
                cout<<1<<endl;
                continue;
            }

            int low = 0, high = exp;
            while(low <= high)
            {
                long long int mid = (low+high)/2;
                if(str + mid > intell + (exp-mid))
                {
                    high = mid-1;
                }
                else
                    low = mid+1;
            }

            cout<< exp - high << endl;
        }
    }
    return 0;
}
