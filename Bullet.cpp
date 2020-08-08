#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],b[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]*a[j]+b[i]*b[j]!=0)c++;
        }
    }
    c+=n;
    cout<<c%1000000007<<endl;
}
