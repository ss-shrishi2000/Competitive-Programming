#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int x;vector<long long> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    long long sum=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        sum+=(i+1)*v[i]+v[i];
    }
    cout<<sum+n*v[n-1];
    return 0;
}
