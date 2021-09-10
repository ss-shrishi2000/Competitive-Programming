#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int t[n];
    for(int i=0;i<n;i++)
        cin>>t[i];
    priority_queue< int, vector<int> , greater<int> > minheap;
    int x,y;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(x==1)
        {
            minheap.push(t[y-1]);
            if(minheap.size()>k)
                minheap.pop();
        }
        else
        {
            vector<int> vec;
            bool f=false;
            while(minheap.empty()==false)
            {
                int rx=minheap.top();
                if(rx==t[y-1])
                {
                    f=true;
                    break;
                }
                vec.push_back(rx);
                minheap.pop();
            }
            for(int i=0;i<vec.size();i++)
                minheap.push(vec[i]);

            if(f==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
