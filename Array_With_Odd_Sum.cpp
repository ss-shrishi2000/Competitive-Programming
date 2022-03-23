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
        int ar[n];
        long long int s=0;
        for(int i=0; i<n; i++)
            cin>>ar[i], s+=ar[i];

        bool f=false;
        if(s%2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]%2)
            {
                cnt++;
            }
        }
        if(cnt==n && s%2==0)
            cout<<"NO"<<endl;
        else if(cnt==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }
    }
}
