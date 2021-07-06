#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

bool cmp(pair<int, int> &p1 , pair<int ,int> &p2)
{
    if(p1.first<p2.first)
        return 1;
    else
        return p1.second<p2.second;
}

int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //priority_queue<pii , vector<pii> , greater<pii> > pq;
    //priority_queue<pii> pq;
    vector<pii> vec;
    for(int i=0;i<n;i++)
    {
        vec.push_back({abs(arr[i]-x) , arr[i]});
    }
    sort(vec.begin(),vec.end(),cmp);
    for(int i=0;i<k;i++)
    {
        cout<<vec[i].second<<" ";
    }
    return 0;
}
