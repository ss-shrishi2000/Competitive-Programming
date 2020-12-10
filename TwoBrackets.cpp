#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        stack<char> c1,c2;
        long long int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c1.push('(');
            }
            else if(s[i]==')')
            {
                if(c1.empty()==true)continue;
                else{
                    c1.pop();
                    cnt++;
                }
            }
            else if(s[i]=='[')
            {
                c2.push('[');
            }
            else{
                if(c2.empty()==true)
                {
                    continue;
                }
                else{
                    c2.pop();
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
