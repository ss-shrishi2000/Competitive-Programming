#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0;cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            if(a>0)a--;
            else if(b>0)
            {
                b-=1;c++;
            }
            else if(c>0)
                c--;
            else
                ans++;
        }
        else{
            if(b>0)b-=1;
            else
                ans+=2;
        }
    }
    cout<<ans;
    return 0;
}
