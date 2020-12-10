#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,s,ans=-1;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(s*100 >= (x*100 + y))
        {
            ans=max(ans,(100-y)%100);
        }
    }
    cout<<ans;
    return 0;
}
