#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> stones;
    int x;
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        stones.push_back(x);
        pq.push(x);
    }
    while(pq.empty()==false or pq.size()>1)
    {

    }

}
