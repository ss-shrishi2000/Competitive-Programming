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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int g=0,cr;
        for(int i=1;i<n;i++)
        {
            cr = arr[i]-arr[0];
            g = __gcd( cr, g );
        }
        if(g)
            cout<<g<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
