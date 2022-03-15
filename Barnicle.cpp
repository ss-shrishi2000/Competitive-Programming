#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int power=0, dot_pos=0;

    int i=s.size()-1;
    string prt="";
    while(i>=0 && s[i]!='e')
        { prt+= s[i]; i--; }

    reverse(prt.begin(),prt.end());

    for(int i=0; i<prt.size(); i++)
        power = power*10 + (prt[i]-'0');

    dot_pos=i;
    i-=1;

    string p="";
    while(i>=0)
    {
        if(s[i]!='.')
            p+=s[i];

        i--;
    }
    reverse(p.begin(),p.end());
    dot_pos = s.size() - 1 - dot_pos;

    if(p==string(p.size(),'0'))
    {
        cout<<0;
        return 0;
    }

    if(dot_pos + power >= p.size()+1)
    {
        //cout<<1<<endl;
        cout<<p;
        for(int h = 1; h <= power - p.size()+1 ; h++)
            cout<<0;
    }
    else
    {
        //cout<<2<<endl;
        int j=-1;
        string ans="";
        bool f=false;
        for(int k=0; k<p.size(); k++)
        {
            if(j==power)
                ans+=".";

            ans+=p[k];
            j++;
        }
        string ex="";
        j=ans.size()-1;
        while(j>=0 && ans[j]=='0')
        {
            j--;
        }
        if(j==ans.size()-1 && ans[j]!='0')
        {
            cout<<ans;
        }
        else{
            ans.erase(j,s.size()-1);
        cout<<ans<<endl;
        }
    }
    return 0;
}
