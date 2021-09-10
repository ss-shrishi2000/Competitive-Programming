#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool recur2(ll w , ll m);

bool recur1(ll w , ll m)
{
    if(w<=3 || m==1 || recur2(w , m+1) || recur2(w, m-1) || recur2(w,m))
        return true;

    return false;
}

bool recur2(ll w , ll m)
{
    return (m%w==0 && recur1(w,m/w));
}

int main()
{
    ll w,m;
    cin>>w>>m;
    if(recur1(w,m))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
