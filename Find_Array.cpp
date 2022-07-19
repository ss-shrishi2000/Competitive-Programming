#include<bits/stdc++.h>
using namespace std;
#define N 1000005
vector<int> v;
void sieve()
{
    bool prime[N];
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i<=N; i++)
    {
        if(prime[i]==true)
        {
            for(int j = i*i; j<=N; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for(int i=2; i<=N; i++)
        if(prime[i]==true)
            v.push_back(i);
}
int main()
{
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
