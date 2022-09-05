#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(s[0]=='9')
        {
            bool x=0;
            while(n--)
            {
                int k=x+s[n]-'0';
                if(k<2)
                   x=0,s[n]=(char)(1-k+'0');
                else
                   x=1,s[n]=(char)(11-k+'0');
            }
            cout<<s;
        }
        else
        {
            for(char i:s)
              cout<<9+'0'-i;
        }
        cout<<endl;
    }
}
