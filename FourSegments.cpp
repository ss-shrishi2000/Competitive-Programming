#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a[4];
        set<int> s;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()==1)
        {
            auto it=s.begin();
            int t=*it;
            cout<<t*t<<endl;
        }
        else
        {
            sort(a,a+4);
            cout<<a[0]*a[2]<<endl;
        }
    }
    return 0;
}
