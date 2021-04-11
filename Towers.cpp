#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<pair<int,int> > ans;
    int cnt=0;
    while(k--)
    {
       auto it1=min_element(a , a+n);
       auto it2=max_element(a , a+n);
       if(*it1==*it2)
        break;
       cnt++;
       ans.push_back({it1-a , it2-a });
       a[it1-a]++;
       a[it2-a]--;
    }
    cout << *max_element(a,a+n) - *min_element(a,a+n)<< " " << cnt << endl;
    for(auto it:ans)
        cout<<it.second+1<<" "<<it.first+1 << endl;
    return 0;
}
