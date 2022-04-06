#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v1,v2;
    pair<int,int> p;

    for(int i=0;i<n;i++)
    {
        cin>>p.first>>p.second;
        if(p.first<p.second)
            v1.push_back({p.first,i+1});
        else
            v2.push_back({p.second,i+1});
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.begin(),v2.end());
    if(v1.size()>v2.size())
    {
        cout<<v1.size()<<endl;
        for(auto it:v1)
            cout<<it.second<<" ";
    }
    else{
        cout<<v2.size()<<endl;
        for(auto it:v2)
            cout<<it.second<<" ";
    }
    return 0;
}
