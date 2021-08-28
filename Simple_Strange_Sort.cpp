#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<int , vector<int> , greater<int> > pq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            int r=pq.top();
            if(r==a[i])
                pq.pop();
            else
                break;
        }
        if(pq.empty())
            cout<<0<<endl;
        else
        {

        }
    }
}
