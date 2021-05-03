#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    deque<long long int> dq;
    long long int a[n],mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dq.push_back(a[i]);
        mx=max(mx,a[i]);
    }
    vector<pair<long long int,long long int> > dummy;
    int j=2;
    while(dq.front()!=mx)
    {
        dummy.emplace_back(dq[0],dq[1]);
        j=2;
        while(j--)
        {
            dq.pop_front();
        }
        long long int lar=max(dummy.back().first, dummy.back().second);
        long long int sma=min(dummy.back().first , dummy.back().second);
        dq.push_back(sma);
        dq.push_front(lar);
    }
    long long int x;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        x-=1;
        if(x<dummy.size())
        {
            cout<<dummy[x].first<< " " << dummy[x].second<<endl;
        }
        else
        {
            x-=dummy.size();
            cout<< mx <<" " << dq[ x%(n-1) +1] << endl;
        }
    }
    return 0;
}
