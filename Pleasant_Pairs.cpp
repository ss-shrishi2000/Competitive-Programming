#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        lli a[n];
        pair<lli, lli> pr[n];
        for(int i=0; i<n; i++)
            cin>>a[i],pr[i].first = a[i], pr[i].second = i+1;

        sort(pr,pr+n);

        lli ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(pr[i].first * pr[j].second >2*n)
                    break;
                else if(pr[i].first * pr[j].first == pr[i].second + pr[j].second )
                     ans++;
            }
        }
        cout<<ans<<endl;
    }
}
