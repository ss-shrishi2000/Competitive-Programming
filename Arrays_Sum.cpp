#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    set<int> s;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        s.clear();
        int a[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        s.insert(a[i]);
        }
        int x=s.size();
        if(k==1 && s.size()>1)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(k==1 && s.size()==1)
            cout<<1<<endl;
        else{
            long long ans=1;
            x-=k;
            while(x>0)
            {
                x-=(k-1);
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
