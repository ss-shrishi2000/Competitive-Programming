#include<bits/stdc++.h>
using namespace std;
int dp[200][200]{0};
static int LCS(string x,string y,int n,int m)
{
    if(n==0||m==0)return 0;
    if(x[n-1]==y[m-1])
        return dp[n][m]=1+LCS(x,y,n-1,m-1);
    else
        return dp[n][m]=max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
}
int main()
{
    string x,y;cin>>x>>y;
    int n=x.length(),m=y.length();
    cout<<LCS(x,y,n,m);
}

