#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.size();
    if(n==1 && (s[0]-'0')%8==0){cout<<"YES"<<endl<<s;return 0;}
    else if(n==2 && stoi(s)%8==0){cout<<"YES"<<endl<<s;return 0;}
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0'){cout<<"YES"<<endl<<"0";return 0;}
    }
    for(int i=0;i<n;i++)
    {
        if((s[i]-'0')%8==0){cout<<"YES"<<endl<<s[i];return 0;}
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            char x[10]{};
            x[0]=s[i],x[1]=s[j];
            if(atoi(x)%8==0){
                cout<<"YES"<<endl<<x;
                return 0;
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                char p[10]{};
                p[0]=s[i];p[1]=s[j];p[2]=s[k];
                int x=atoi(p);
                if(x%8==0){
                    cout<<"YES"<<endl<<p;return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}
