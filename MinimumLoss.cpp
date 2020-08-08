#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++){cin>>p[i].first;p[i].second=i;}
    sort(p.begin(),p.end());
    long minval = 0;
    for (int i=1;i<n;i++) {
    if (p[i].second>p[i-1].second) continue; // yr sold > yr bought
    long diff=p[i].first-p[i-1].first;
    if (!minval) minval=diff;
    else if (diff<minval) minval=diff;
}

cout << minval;
}
