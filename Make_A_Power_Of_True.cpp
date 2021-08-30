#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int r;
        cin>>r;
        int cnt=0;
        while(r%2==0)
            r=r/2;
        while(r)
        {
            r=r/2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
