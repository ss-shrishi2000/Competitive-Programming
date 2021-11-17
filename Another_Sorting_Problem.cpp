#include<bits/stdc++.h>
using namespace std;
bool cmp( pair<string,int> p1 , pair<string,int> p2 )
{
    for(int i=0;i<p1.first.size();i++)
    {
        if(i%2==0)
        {
            if(p1.first[i]!=p2.first[i])
                return (p1.first < p2.first);
        }
        else {
            if(p1.first[i]!=p2.first[i])
                return (p1.first>p2.first);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<string,int>> sr(n);
    string s;

    for(int i=0;i<n;i++)
        cin>>s , sr[i].first = s , sr[i].second = i+1;

    sort(sr.begin(), sr.end(), cmp);
    for(int i=0;i<n;i++)
       cout<<sr[i].second<<" ";

    return 0;
}
