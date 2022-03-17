#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int c[2]{0};
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            c[1]++;
        else 
            c[0]++;
    }
    if(n!=1 && (c[0]!=c[1]))
    {
        cout<<1<<endl<<s;
    }
    else if(n==1)
        cout<<1<<endl<<s;
    else
    {
        cout<<2<<endl;
        int a=0,b=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')a++;
            else b++;
        }
        if(a!=b)
            cout<<s.substr(0,s.size()-1)<<" "<<s[n-1];
        else 
            cout<<s.substr(0,n-2)<<" "<<s[n-2]<<s[n-1];
    }
}
