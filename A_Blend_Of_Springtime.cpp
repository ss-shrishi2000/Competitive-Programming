#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int l=s.size();
    for(int i=0;i<l-2;i++)
    {
        if(s.substr(i,3)=="BAC" || (s.substr(i,3)=="ABC") || (s.substr(i,3)=="CBA") || (s.substr(i,3)=="ACB") ||
           (s.substr(i,3)=="BCA") || (s.substr(i,3)=="CAB"))
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
