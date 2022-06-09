#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        pair<long long int, long long int> pr[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            pr[i].first = a[i];
            pr[i].second = i+1;
        }
        sort(pr, pr+n);
        long long int mid = (n/2);
        long long int ans[n+5];
        ans[0] = mid;
        long long int j = mid-1;
        long long int k = mid+1;
        bool f = 0;
        long long int res = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(f==0)
            {
                ans[pr[i].second] = j;
                f = 1;
                res += abs(mid - j)*pr[i].first;
                j--;
            }
            else
            {
                ans[pr[i].second] = k;
                f = 0;
                res += abs(mid - k)*(pr[i].first);
                k++;
            }
        }
        cout<<(2*res)<<endl;
        for(int i=0; i<=n; i++)
            cout<<ans[i]<< " ";
        cout<<endl;
    }
    return 0;
}
