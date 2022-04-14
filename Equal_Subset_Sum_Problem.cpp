#include<bits/stdc++.h>
using namespace std;
static bool dp[110][1010];
bool Equal(int a[],int sum,int n)
{
    if(n==0)
        return true;
    if(n==0&&(sum!=0))
        return false;
    if(a[n-1]>sum)
        return dp[n][sum]=Equal(a,sum,n-1);

    return dp[n][sum]=Equal(a,sum,n-1)||Equal(a,sum-a[n-1],n-1);

}
int main()
{
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2!=0)
        cout<<"0";
    else{
        cout<<Equal(a,sum/2,n);
    }
}
