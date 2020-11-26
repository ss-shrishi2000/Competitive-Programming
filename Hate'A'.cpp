#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,t="";
     cin>>s;
     for(int i=0;i<s.size();i++)
        if(s[i]!='a')
            t+=s[i];

    if(t.size()%2!=0)
    {
    cout<<":(";
    return 0;
    }
    int r=t.size()/2;
    string t1=t.substr(0,r);
    string t2=t.substr(r,r);

    cout<<t1<<" "<<s.substr(s.size()-r,r)<<endl;

    if(t1==t2 && t1==s.substr(s.size()-r,r))
        cout<<s.substr(0,s.size()-r);
    else
        cout<<":("<<endl;
    return 0;
}
