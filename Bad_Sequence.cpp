#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    string s; cin>>s;
    if(n%2)
    {
        cout<<"No";
        return 0;
    }
    int op = 0, cl = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
            op++;
        else
            cl++;
    }
    if(op!=cl)
    {
        cout<<"No";
        return 0;
    }

    stack<char> st;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
            st.push(s[i]);
        else
        {
            if(st.empty())
            {
                cnt++;
            }
            else if(st.top()=='(')
            {
                st.pop();
            }
        }
    }
    if(cnt<=1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
