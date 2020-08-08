#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[i]&& (isupper(s[i]))==isupper(t[i]) && islower(s[i])==islower(t[i]) )c++;
        else if(s[i]==t[i])
    }
}
