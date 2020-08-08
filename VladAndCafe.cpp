#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    set<int>s;
    vector<int>v;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    for(int i=n-1;i>=0;i--)
    {
    int x=v[i];
    if(!s.count(x)){
         s.insert(x);ans=x;
        }
    }
    cout<<ans<<endl;
}


