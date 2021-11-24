#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
                st.push(s[i]);
            else if(s[i]=='B')
            {
                if(st.empty()==false && (st.top()=='A' || st.top()=='B'))
                {
                    st.pop();
                }
                else
                    st.push(s[i]);
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
