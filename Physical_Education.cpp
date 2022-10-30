#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+10],b[n+10];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    vector<int> v1,v2;
    int i,j;
    for(int i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(b[j]==a[i])break;
        }
        for(int k=j;k>i;k--)
        {
            swap(b[k-1],b[k]);v1.push_back (k-1);v2.push_back(k);
        }
    }
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)cout<<v1[i]<<" "<<v2[i]<<endl;
}
