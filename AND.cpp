#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    set<int>p;
    for(int i=0;i<n;i++){cin>>a[i];p.insert(a[i]);}
    if(p.size()<n)cout<<0<<endl;
    else{
        int x;
        set<int>q;
        for(int i=0;i<n;i++)
        {
            x=a[i]&k;
            q.insert(x);
            if(p.count(x)==1 and a[i]!=x){cout<<1<<endl;return 0;}
        }
        if(q.size()==n)cout<<-1<<endl;
        else cout<<2<<endl;
    }
}
