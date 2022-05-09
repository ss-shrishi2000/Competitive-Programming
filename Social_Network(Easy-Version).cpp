#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    deque<int> dq;
    map<int,int> mp;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if(dq.size()<k)
        {
            if(mp.find(a[i]) == mp.end())
            {
                dq.push_front(a[i]);
                mp[a[i]]++;
            }
            else
                continue;
        }
        else
        {
            if(mp.find(a[i]) == mp.end())
            {
                int x = dq.back();
                auto it = mp.find(x);
                mp.erase(it);
                dq.pop_back();
                dq.push_front(a[i]);
                mp[a[i]]++;
            }
            else
            {
                continue;
            }
        }
    }
    cout<<dq.size()<<endl;
    for(int i=0; i<dq.size(); i++)
        cout<<dq[i]<<" ";
    return 0;
}
