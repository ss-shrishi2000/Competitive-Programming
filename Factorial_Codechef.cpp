#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int arr[15],n;
        cin>>n;
        for(int i=1;i<15;i++)
        {
            arr[i]=pow(5,i);
          //  cout<<arr[i]<<endl;
        }
        long long ans=0;
        for(int i=1;i<15;i++)
        {
            ans+=n/arr[i];
        }
        cout<<ans<<endl;
    }
}
