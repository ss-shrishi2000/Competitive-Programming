#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    if((n*(n-1)/2) < k)
        cout<<"Impossible"<<endl;
    else
    {
        int r=0;
        for(int i=1;i<=2*n;i++)
        {
            if(r<=k)
            {
                k-=r;
                r++;
                cout<<'(';
            }
            else{
                cout<<')';
                r--;
            }
        }
    }
    return 0;
}
