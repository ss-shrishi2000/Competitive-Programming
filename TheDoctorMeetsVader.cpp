#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,b;cin>>s>>b;
    int a[s+1];
    for(int i=1;i<=s;i++)cin>>a[i];
    pair<int,int> p[b+1];
    for(int i=1;i<=b;i++)cin>>p[i].first>>p[i].second;
    sort(p+1,p+b+1);
    int sum[b+1]{0};
    for(int i=1;i<=b;i++)sum[i]=sum[i-1]+p[i].second;
    for(int i=1;i<=s;i++)
    {
        int low=0,high=b+1;
        while(low<high-1)
        {
            int mid=(low+high)/2;
            if(p[mid].first<=a[i])
            {
                low=mid;
            }
            else{
                high=mid;
            }
        }
        cout<<sum[low]<<" ";
    }
}
