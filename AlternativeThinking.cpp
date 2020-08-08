#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,lrs=1;
    string s;cin>>n>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
            lrs++;
    }
    cout<<min(lrs+2,n);
    return 0;
}
