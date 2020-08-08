#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.size();
        int l=0,r=1,c1=0,c2=0,c3=0;
        if(s[0]=='0')c1++;
        else if(s[0]=='1')c2++;
        else c3++;

        bool f=false;
        while(r<n)
        {
            if(s[r]=='0')c1++;
            else if(s[r]=='1')c2++;
            else c3++;
            if(c1>0 and c2>0 and c3>0){cout<<r+1<<endl;f=true;break;}
            r++;
        }
        if(f==true)continue;
        else cout<<0<<endl;
    }
}
