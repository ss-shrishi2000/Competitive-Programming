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
        string s;
        cin>>s;
        string t="abacaba";
        bool c=false;
        for(int i=0;i<=n-7;i++)
        {
            string str(s);
            for(int j=0;j<7;j++)
            {
                if(str[i+j]==t[j])
                {
                    continue;
                }
                else if(str[i+j]=='?')
                {
                    str[i+j]=t[j];
                }
                else
                {
                    break;
                }
            }
            for(int j=0;j<n;j++)
                if(str[j]=='?')
                    str[j]='z';

            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(str.substr(j,7)==t)
                {
                    cnt++;
                }
            }
            if(cnt==1)
            {
            	s=str;
            	c=true;
			}
        }
        if(c)
        {
            cout<<"YES"<<endl<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
