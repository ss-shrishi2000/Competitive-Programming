#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty()==true)
            st.push(s[i]);
        else if(st.empty()==false and s[i]==st.top())
        {
            st.pop();
            c++;
        }
        else
        {
            st.push(s[i]);
        }
    }
    if(c%2==0)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}
