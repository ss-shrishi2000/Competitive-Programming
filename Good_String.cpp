#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    string s; cin>>s;
    stack<char> st;
    st.push(s[0]);
    for(int i=1; i<n; i++)
    {
        if(st.size()%2!=0 && st.top()==s[i])
        {
            continue;
        }
        else if(st.size()%2!=0 && st.top()!=s[i])
        {
            st.push(s[i]);
        }
        else if(st.size()%2==0)
        {
            st.push(s[i]);
        }
    }
    string ans="";
    while(st.empty()==false)
    {
        ans+=st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    if(ans.size()%2)
        ans.pop_back();

    cout<<n-ans.size()<<endl;
    cout<<ans<<endl;
    return 0;
}
