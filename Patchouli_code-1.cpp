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
        int arr[n],mi=INT_MAX,cnt=0,od=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
            cnt=0;
            while(arr[i]>0 && arr[i]%2==0)
            {
                arr[i]/=2;
                cnt++;
            }
            mi=min(mi,cnt);
            }
            else
            {
              od++;
            }
        }
        if(od==0)          //all elements even
        {
            cout<<n-1+mi;
        }
        else if(od==n)        //all elements odd
        {
            cout<<0;
        }
        else               // when both are present
        {
            cout<<n-od;
        }
        cout<<endl;
    }
}
