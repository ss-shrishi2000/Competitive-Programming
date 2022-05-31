#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        string s;cin>>s;
        int c0=0,c1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')c0++;
            else c1++;
        }
        int m=min(c0,c1);
        if(m%2==0)
           cout<<"NET"<<endl;
        else  
           cout<<"DA"<<endl;
    }
}
