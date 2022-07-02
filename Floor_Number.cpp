#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        int f = 1;
        n-=2;
        if(n<=0)
        {
            cout<<1<<endl;
            continue;
        }
        if(n%x==0)
        {
            f+=(n/x);
        }
        else
            f+=(n+x)/x;

        cout<<f<<endl;
    }
    return 0;
}
