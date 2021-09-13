#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()>k)
        {
            cout<< -1 <<endl;
            continue;
        }
        cout<< n*k <<endl;
        for(int i=0;i<n;i++)
        {
        for(auto it=s.begin();it!=s.end();it++)
            cout<<(*it)<<" ";
        for(int i=0;i<k-s.size();i++)
            cout<< 1 << " ";
        }
        cout<<endl;
    }
    return 0;
}
