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
        int cube=0,sq=0;
        set<int> st;
        for(int i=1; i*i<=n; i++)
        {
            st.insert(i*i);
        }
        for(int i=2; i*i*i<=n; i++)
        {
            st.insert(i*i*i);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
