#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int> s;
        s.insert(0);
        s.insert(n);
        for(int i=1;i<=sqrt(n);i++)
        {
            s.insert(n/i);
            if(n/i!=i)
            {
                s.insert(i);
                //cout<<i<<" ";
            }
        }
        cout<<s.size()<<endl;
        for(auto it=s.begin();it!=s.end();it++)cout<<*it<<" ";
        cout<<endl;
    }
    return 0;
}
