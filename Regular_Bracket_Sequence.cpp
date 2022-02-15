#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string p;
    cin>>p;
    if(p.size()%2)
    {
        cout<<"NO"<<endl;
        continue;
    }

    if(p[0]!=')' && p[p.size()-1]!='(')
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
