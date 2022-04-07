#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        lli a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        if(n==1)
        {
            if(a[0]>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            int x = (a[n-1]-a[n-2]);
            if(x>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
