#include<bits/stdc++.h>
using namespace std;
//haste makes waste!!!
int main()
{
    int t;cin>>t;
    while(t--)
    {
        vector<int> v;
        int n;cin>>n;
        string a,b;cin>>a>>b;
        for(int i=0;i<n;i++) if(a[i]!=b[i]) v.push_back(i);
        if(v.size()==2 && (a[v[0]]==a[v[1]]) &&(b[v[0]]==b[v[1]])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        v.clear();
    }
}
