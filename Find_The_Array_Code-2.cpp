#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++)
           cin>>a[i];
        b[0]=a[0];
        for(int i=1;i<n;i++)
        {
            b[i]= a[i] - (a[i] % b[i-1]);
            if(b[i] <= 0)
                b[i]=1;
        }
        for(int i=0;i<n;i++)cout<<b[i]<<" ";
        cout<< endl ;
    }
    return 0;
}
