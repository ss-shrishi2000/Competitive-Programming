#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool f = true;
        int n, k;
        cin>>n>>k;
        n = 2*n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        int mid = (n/2)-1 , j = n-1;
        for(int i=mid; i>=0; i--)
        {
            if(a[j]-a[i]<k)
            {
                f=false;
                break;
            }
            else
                j--;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
