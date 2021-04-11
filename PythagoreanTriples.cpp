#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0;
        for(int i=2; (i*i+1)<= 2*n ;i++)
        {
            if((i*i-1)%2==0  && (i*i+1)%2==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
