#include<bits/stdc++.h>
using namespace std;
int main()
{
    int queries;
    cin>>queries;
    int cust = 1;
    set<pair<int,int>> st;
    map<int,int> mp;
    set<int> removed;
    while (queries--)
    {
        int n;
        cin>>n;
        if (n==1)
        {
            int cost;
            cin>>cost;
            st.insert(make_pair(cost, -cust));
            mp[cust] = cost;
            removed.insert(cust);
            cust++;
        }
        else if(n==2)
        {
            int cur = *removed.begin();
            removed.erase(cur);
            st.erase({mp[cur], -cur});
            cout<<cur<<" ";
        }
        else
        {
            pair<int,int> pp=*st.rbegin();
            int cur= -pp.second;
            st.erase(pp);
            removed.erase(cur);
            cout<<cur<<" ";
        }
    }
    return 0;
}
