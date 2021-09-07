#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int od=0,ev=0;
        int arr[n+10];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                ev++;
            else
                od++;
        }
        if(abs(ev-od) > 1)
            cout<<-1<<endl;
        else
        {
            long long s1=0;
            int left=0,right=0;
            for(int left=0;left<(n-1)/2;left++)
            {
                if((arr[left]%2) == (arr[left+1]%2))
                {
                    right=left+1;
                    while(right<n)
                    {
                       if((arr[right]%2) != arr[left]%2)
                       {
                           s1+=right-left;
                           swap(arr[right] , arr[left]);
                           break;
                       }
                       else
                        right++;
                    }
                }
            }
            cout<<s1/2<<endl;
        }
    }
    return 0;
}
