#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q;
    cin>>a>>b;
    int g=__gcd(a,b);
    // cout<<g;
    vector<int> vec;
    for(int i=2;i<=sqrt(g)+1;i++)
    {
        if(g%i==0)
        {
            vec.push_back(i);
            if(g/i != i)
            {
                vec.push_back(g/i);
            }
        }
    }
    vec.push_back(g);
    vec.push_back(1);
    sort(vec.begin(),vec.end());
    cin>>q;
    while(q--)
    {
        int x,y;cin>>x>>y;
        auto c=lower_bound(vec.begin(),vec.end(),x);
        if(c==vec.end())
        {
            cout<<-1<<endl;
        }
        else
        {
            int ind=c-vec.begin();
            int ans=INT_MIN;
            for(;c!=vec.end();c++)
            {
            if(*c >=x && *c <=y)
            {
                ans=max(ans,*c);
            }
            else
                break;
            }
            if(ans==INT_MIN)
                cout<<-1<<endl;
            else
                cout<<ans<<endl;
        }
    }
    return 0;
}
