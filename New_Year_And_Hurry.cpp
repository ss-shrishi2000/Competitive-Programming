#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int rem=240-k;
    for(int i=1;i<=n;i++)
    {
        rem-=i*5;
        if(rem<0)
        {
            cout<<i-1;
            return 0;
        }
    }
    cout<<n<<endl;
}
