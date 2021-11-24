#include<bits/stdc++.h>
using namespace std;
bool cmp(string &s1,string &s2)
{
    return (s1.size()<s2.size());
}
int main()
{
    int n;
    cin>>n;
    string st[n];
    for(int i=0;i<n;i++)
        cin>>st[i];
    sort(st,st+n,cmp);

    // for(int i=0;i<n;i++)
     //   cout<<st[i]<<endl;

    if(n==1)
    {
        cout<<"YES"<<endl;
        cout<<st[0]<<endl;
        return 0;
    }

    bool f=false;
    for(int i=1;i<n;i++)
    {
        string p=st[i],r=st[i-1];
        f=false;
        for(int j=0;j<p.size();j++)
        {
            if(p.substr(j,r.size()) == r)
            {
                f=true;
                break;
            }
        }
        if(f==false)
            break;
    }

    if(f==false)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
        cout<<st[i]<<endl;
}
