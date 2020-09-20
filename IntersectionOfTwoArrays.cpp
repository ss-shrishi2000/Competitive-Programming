#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    set<int> s1,s2;
    int a,a2;
    for(int i=0;i<n;i++){cin>>a;s1.insert(a);}
    for(int i=0;i<m;i++)
    {
    cin>>a2;
    if(s1.count(a2)==1)s2.insert(a2);
    }
    for(auto it:s2)cout<<it<<" ";
}
