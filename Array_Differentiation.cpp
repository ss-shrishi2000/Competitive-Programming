#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        long long x=(1<<n);
        bool f=false;
        unordered_set<long long>s;

        for(long long i=0;i<x;i++)
        {
            long long sum=0;
            for(long long j=0;j<n;j++)
            {
                if(i&(1<<j))
                    sum+=a[j];
            }
            if(s.find(sum)!=s.end())
            {
                f=1;
                break;
            }
            s.insert(sum);
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
