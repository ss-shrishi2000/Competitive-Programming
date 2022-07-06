#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    string a,b;
    cin>>a>>b;
    int c[3000]{0};
    for(int i=0;i<n-m+1;i++)
    {
        if(a.substr(i,m)==b)
            c[i]+=1;
    }
    while(q--)
    {
        int l,r,s=0;
        cin>>l>>r;
        for(int i=l-1;i<=r-m;i++)
            s+=c[i];
        
        cout<<s<<endl;
    }

}
