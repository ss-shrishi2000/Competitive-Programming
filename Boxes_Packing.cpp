#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c=1;
    cin>>n;
    map<int,int>mp;
    while(n--)
    {
    cin>>a;mp[a]++;
    c=max(c,mp[a]);
    }
    cout<<c;

}
