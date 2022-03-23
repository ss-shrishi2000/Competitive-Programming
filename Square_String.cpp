#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int l =s.size()/2;
        string p =s.substr(l);
        string q = s.substr(0,l);
        if(p==q)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
