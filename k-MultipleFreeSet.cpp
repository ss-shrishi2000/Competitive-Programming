#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    set<long long int> s;
    vector<long long int> ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]%k)
        {
            s.insert(a[i]);
            ans.push_back(a[i]);
        }
        else{
            if(s.find(a[i]/k) != s.end())
                continue;
            else{
                ans.push_back(a[i]);
                s.insert(a[i]);
            }
        }
    }
    cout<<ans.size()<<endl;
    return 0;
}
