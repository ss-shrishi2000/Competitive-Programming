#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,r,l;
        cin>>l>>r>>k;
        if(l==r && l==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(l==r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
        long long int t = (r-l+1) - (r/2 - (l-1)/2);
        if(k >= t)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
