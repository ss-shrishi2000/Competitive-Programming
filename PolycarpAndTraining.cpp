#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int j=1,days=0,i=0;
    while(i<n)
    {
        if(a[i]>=j)
        {
            days++;
            j++;
        }
        i++;
    }
    cout<<days;
    return 0;
}
