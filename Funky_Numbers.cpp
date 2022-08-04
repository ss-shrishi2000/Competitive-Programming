#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long int p,k,m;
    for(int i=1;i<=sqrt(2*n);i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i*i+j*j+i+j==2*n)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
