#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<string , int> a, const pair<string , int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,string>> p(n);
    for (int i = 0; i<n; i++)
    {
        cin>>p[i].second>>p[i].first;
    }
    sort(p.begin(),p.end());

    for (int i = 0; i<n; i++)
    {
        if (p[i].first>i)
        {
            cout << -1;
            return 0;
        }
    }
    vector<pair<string,int>> ans;
    for (int i = 0; i<n; i++)
    {
        int h= n-i;
        ans.insert(ans.begin()+p[i].first,{p[i].second,h});
    }
    for (int i= 0; i<n; i++)
        cout<<ans[i].first << " "<<ans[i].second << endl;

    return 0;
}
