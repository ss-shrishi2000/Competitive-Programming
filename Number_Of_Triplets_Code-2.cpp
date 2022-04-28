#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int dp[3000][3000];

int main()
{
    int n; cin>>n;
    int x,y;

    pair<int,int> pr[n];

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        x = x+1000;
        y = y+1000;
        dp[x][y] = 1;
        pr[i].ff = x;
        pr[i].ss = y;
    }

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(((pr[i].ff + pr[j].ff)%2==0) && (pr[j].ss + pr[i].ss)%2==0)
            {
                int xb = (pr[i].ff + pr[j].ff)/2;
                int yb = (pr[j].ss + pr[i].ss)/2;
                if(dp[xb][yb])
                    ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
