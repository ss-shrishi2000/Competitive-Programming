#include<bits/stdc++.h>
using namespace std;
#define lli long long

int main()
{
    lli n,x;
    cin>>n;
    lli a[n];
    for(lli i=0; i<n; i++)
        cin>>a[i];
    set<pair<lli,lli>> st;
    for(int i=0; i<n; i++)
    {
        lli p = a[i];
        lli c1=0;
        while(p>0 && p%3==0)
        {
            c1++;
            p=p/3;
        }
        st.insert({-c1, a[i]});
    }
    for(auto it=st.begin(); it!=st.end(); it++)
        cout<< it->second << " ";
    return 0;
}
