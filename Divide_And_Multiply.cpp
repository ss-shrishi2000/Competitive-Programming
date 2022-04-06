#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t; cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli a[n];
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            while(a[i]>0 && (a[i]%2==0))
            {
                cnt++;
                a[i]=a[i]/2;
            }
        }
        sort(a,a+n);
        a[n-1] = a[n-1]*pow(2,cnt);
        lli s=0;
        for(int i=0; i<n; i++)
            s+=a[i];

        cout<<s<<endl;
    }
    return 0;
}
