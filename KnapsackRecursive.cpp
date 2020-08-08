#include<bits/stdc++.h>
using namespace std;
static int t[110][1010]{-1};
int knapsack(int wt[],int vl[],int w,int n)
{
    if(w==0||n==0)return 0;
    if(t[n][w]!=-1)return (t[n][w]);
    else if(wt[n-1]<=w)
    {
        return t[n][w]=(max(vl[n-1]+knapsack(wt,vl,w-wt[n-1],n-1),knapsack(wt,vl,w,n-1)));
    }
    else {
        return  t[n][w]=(knapsack(wt,vl,w,n-1));
    }
}
int main()
{
    int n,w;cin>>n>>w;
    int vl[n],wt[n];
    for(int i=0;i<n;i++)cin>>vl[i];
    for(int j=0;j<n;j++)cin>>wt[j];
    cout<<knapsack(wt,vl,w,n);
}
