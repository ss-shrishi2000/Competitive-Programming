#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1],cnt[n+1]{0};
    for(int i=1;i<=n;i++)cin>>a[i];
    int j=1;
    for(int i=1;i<=n;i++)
    {
        if(i==1 and a[i]==0){cout<<-1;return 0;}
        if(i==1 and a[i]!=0)
        {
            while(a[i]!=0 and j<=n){cout<<1<<" "<<j<<endl;cnt[j]++;j++;a[i]--;}
        }
        else if(a[i]==0)continue;
        else{
            while(a[i]!=0)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
