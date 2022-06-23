#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    pii pr[n];

    for(int i=0; i<n; i++)
        cin>>a[i], pr[i] = {a[i], i};

    sort(pr, pr+n);

    vector<pii> ans;
    while(k--)
    {
       if(pr[0].first == pr[n-1].first)
            break;

       pr[0].first+=1;
       pr[n-1].first-=1;
       ans.push_back({pr[0].second, pr[n-1].second});
       sort(pr, pr+n);
    }
    int x = pr[n-1].first - pr[0].first;
    cout<<x<<" "<< ans.size()<<endl;

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i].second+1 << " " << ans[i].first+1 << endl;
    return 0;
}
