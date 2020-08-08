#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int> v;
        int i,p;
        for(i=1;i<=1e9;i+=n)
        {
            if(k)
            {
                for(int j=i;j<i+n;j++){v.push_back(j);p++;k-=n;}
            }
            if(k==0)break;
        }
        cout<<v[p]<<endl;
    }
}
