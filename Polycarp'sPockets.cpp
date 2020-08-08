#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],cnt[110]{0},m=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
        m=max(m,cnt[a[i]]);
    }
    cout<<m;
    return 0;
}
