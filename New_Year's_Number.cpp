#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<int, bool> mp;
    for(int i=1; i<=1e6; i++)
    {
        if(i<2020)
           mp[i] = false;
        else if(i==2020 || i==2021)
            mp[i] = true;
        else
            mp[i] = (mp[i-2020] || mp[i-2021]);
    }

    while(t--)
    {
        int n; cin>>n;
        if(mp[n])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
