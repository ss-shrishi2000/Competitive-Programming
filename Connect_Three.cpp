#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3];
    map<int,int> mp;
    for(int i=0;i<3;i++)
    {
        cin>>a[i]>>b[i];
        mp[a[i]]=b[i];
    }
    sort(a,a+3);
    sort(b,b+3);
    cout<<b[2]-b[0]+a[2]-a[0]+1<<endl;
    for(int i=a[0];i<a[1];i++)
    {
        cout<<i<<" "<<mp[a[0]]<<endl;
    }
    for(int i=a[2];i>a[1];i--)
    {
        cout<<i<<" "<<mp[a[2]]<<endl;
    }
    for(int i=b[0];i<=b[2];i++)
    {
        cout<<a[1]<<" "<<i<<endl;
    }
    return 0;
}
