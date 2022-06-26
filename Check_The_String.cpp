#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p="",q="",r="";
    cin>>s;
    int a1=0,a2=0,a3=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            a1++;
            p+=s[i];
        }
        else if(s[i]=='b')
        {
            a2++;
            q+=s[i];
        }
        else
        {
        a3++;
        r+=s[i];
        }
    }
    if(a3==0 or a2==0 or a1==0)
    {
        cout<<"NO"; return 0;
    }
    if(a3==a1 or a3==a2)
    {
        p+=q+r;
        if(p==s)
            cout<<"YES";
        else 
            cout<<"NO";
    }
    else 
        cout<<"NO";
    
    return 0;
}
