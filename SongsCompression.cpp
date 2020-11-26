#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    long long int a,b,sum=0;
    int diff[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum+=a;
        diff[i]=a-b;
    }
    if(sum<=m)cout<<0;
    else{
        sort(diff,diff+n);
        int cnt=0;
        long long int r=sum-m;
        for(int i=n-1;i>=0;i--)
        {
            if(r>0)
            {
                r-=diff[i];cnt++;
            }
            if(r<=0)break;
        }
        if(r>0){
            cout<<-1;
            return 0;
        }
        cout<<cnt;
        return 0;
    }
}
