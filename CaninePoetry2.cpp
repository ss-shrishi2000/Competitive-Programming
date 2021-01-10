#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.size(),cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='&')
                continue;

            else if(i<n-2 && (s[i]==s[i+1]) && (s[i+1]==s[i+2]))
            {
                s[i+1]='*';
                s[i+2]='&';
                cnt+=2;
                i+=2;
            }
            else if((s[i]==s[i+1]))
            {
                s[i+1]='&';
                cnt+=1;
            }
            else if(s[i]==s[i+2] && i<n-2)
            {
                s[i+2]='&';
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
