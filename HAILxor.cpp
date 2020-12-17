#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    long long k=33;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
        long long int a[n];
        vector<vector<long long int > > index(k+1);
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];

            if(i==n-1)continue;

            for(long long int j=k;j>=0;j--)
            {
                if(a[i] & (1LL<<j))
                    index[j].push_back(i);
            }
        }
        vector<long long int > cnt(k+1,0);
        for(long long int i=0;i<n;i++)
        {
            for(long long int j=32;j>=0;j--)
            {
                long long int m=1LL<<j;
                if((a[i]&m)==0)continue;
                a[i]^=m;
                long long int d;
                if(++cnt[j]<index[j].size())
                {
                    d=index[j][cnt[j]++];
                }
                else
                    d=n-1;

                a[d]= a[d]^m;
                if(--x==0)break;
            }
            if(x==0)break;
        }
        for(long long int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
