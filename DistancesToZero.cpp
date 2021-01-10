#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],b[n];
    memset(b,-1,sizeof(b));
    for(int i=0;i<n;i++)cin>>a[i];
    int first_ind=INT_MIN;
    int last_ind=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            first_ind=i;
            b[i]=0;
        }
        else if(a[i]!=0)
        {
            if(first_ind!=INT_MIN)
            {
                b[i]=abs(i-first_ind);
            }
        }
       // cout<<b[i]<<" ";
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            last_ind=i;
        }
        else{
            if(last_ind!=INT_MIN && b[i]!=-1)
            {
                b[i]=min(b[i] , abs(i-last_ind ));
            }
            else if(b[i]==-1)
            {
                b[i]=abs(i-last_ind);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}
