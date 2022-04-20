#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<pair<int,int>> od, ev;
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%2)
                od.push_back(make_pair(x,i+1));
            else
                ev.push_back(make_pair(x,i+1));
        }
        if(ev.size()>0)
        {
            cout<<1<<endl;
            cout<<ev[0].second<<endl;
        }
        else
        {
            if(od.size()>1)
            {
                cout<<2<<endl;
                cout<<od[0].second<<" "<<od[1].second<<endl;
            }
            else if(od.size()<=1)
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
