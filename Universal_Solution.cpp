#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<char,char> hsh;
    hsh['R']='P';
    hsh['S']='R';
    hsh['P']='S';
    while(t--)
    {
        map<char,int> mp;
        string s;
        cin>>s;
        int pp=0,rr=0,ss=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                pp++;
            else if(s[i]=='S')
                rr++;
            else
                ss++;
        }
        int mx= max(pp , max(rr, ss));
        char c;
        if(mx==pp)
            c='P';
        else if(mx==rr)
            c='R';
        else
            c='S';

        for(int i=0;i<s.size();i++)
            cout<<c;
        cout<<endl;
    }
    return 0;
}
