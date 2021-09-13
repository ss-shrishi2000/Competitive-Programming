#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int> hash;
    int a;
    deque<int> dq;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(!hash[a])
        {
            dq.push_front(a);
            hash[a]=1;
        }
        if(dq.size()>k)
        {
            hash[dq.back()]=0;
            dq.pop_back();
        }
    }
    cout<<dq.size()<<endl;
    while(dq.size())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    return 0;
}
