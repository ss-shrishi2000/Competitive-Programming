#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int mn=*min_element(a,a+n) ,m1 =999999999 , m2=-999999999;
    int prev_index=0,ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
        {
            m1=min(m1 ,i-m2 );
            m2=i;
        }
    }
    cout<<m1<<endl;
    return 0;
}
