#include<bits/stdc++.h>
using namespace std;
#define lon long long int
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    lon n,m,p,ans1,ans2;
    cin>>n>>m>>p;
    int f1=0;
    lon x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%p && !f1)
        {
            f1=1;
            ans1=i;
        }
    }
    f1=0;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        if(x%p && !f1)
        {
            f1=1;
            ans2=i;
        }
    }
    cout<<ans1+ans2;
    return 0;
}
