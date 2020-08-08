#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    long long c=0,d=0;
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,5)=="heavy")c++;
        if(s.substr(i,5)=="metal")d+=c;
    }
    cout<<d;
    return 0;
}
