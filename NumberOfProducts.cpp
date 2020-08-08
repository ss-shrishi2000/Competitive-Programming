#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        {
           if(a[j]*a[i]<0&&(a[i]>0)&&(c==0))
           {
               c=1;cnt++;
           }
           else if(a[i]*a[j]<0&&(a[i]<0)&&(c==0))
           {
               cnt+=2;c=1;
           }
           else if(a[i]*a[j]>0&&(c==1))
           {
               cnt++;
           }
           else if(a[i]*a[j]<0&&(c==1))break;
        }
    }
    cout<<cnt;
}
