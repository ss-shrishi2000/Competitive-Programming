#include<bits/stdc++.h>
using namespace std;
static long long t[255][55]{0};
int count( int S[], int m, int n )
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (m <=0 && n >= 1)
        return 0;

    return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}
int main()
{
    int unit,n;cin>>unit>>n;
    int s[n];for(int i=0;i<n;i++)cin>>s[i];
    cout<<count(s,n,unit);
}
