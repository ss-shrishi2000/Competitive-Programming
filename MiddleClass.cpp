#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        long long a[n];
        long long s=0,k=0;
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,greater<long long>());
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
            if(s/(i+1)>=x)k++;
        }
        cout<<k<<endl;
    }
    return 0;
}
