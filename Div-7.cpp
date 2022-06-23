#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    set<int> st;
    for(int i=14; i<=999; i+=7)
    {
        if(i%7==0)
            st.insert(i);
    }
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        string s = to_string(n);
        int ans = INT_MAX;
        int a1 = n;
        for(auto it = st.begin(); it!=st.end(); it++)
        {
            int x = *it;
            string y = to_string(x);
            int d = 0;
            if(y.size()!=s.size())
                continue;
            else
            {
                for(int k=0; k<y.size(); k++)
                {
                    if(y[k]!=s[k])
                        d++;
                }
                if(ans>d)
                {
                    ans = d;
                    a1 = x;
                }
            }
        }
        cout<<a1<<endl;
    }
    return 0;
}
