#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int y,s=0;
        int prefix[n+1];
        memset(prefix,0,sizeof(prefix));
        for(int i=0;i<n;i++)
        {
            cin>>y;
            if(y>i+1)
                y=i+1;
            prefix[i-y+1]+=1;
            prefix[i+1]-=1;
        }
        for(int i=0;i<n;i++)
        {
           s+=prefix[i];
           cout<<!!s<<" ";
        }
        cout<<endl;
    }
    return 0;
}
