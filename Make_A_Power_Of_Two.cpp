#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int res=2e9;
        for(lli i=1;i<=1e18;i*=2)
        {
            string b=to_string(i);
            int q=0;
            for(int j=0;j<a.size();++j)
            {
                if(q<b.size()&&b[q]==a[j])
                    ++q;
            }
            int xx=(int)a.size()+(int)b.size()-2*q;
            res=min(res,xx);
        }
        cout<<res<<endl;
    }
    return 0;
}
