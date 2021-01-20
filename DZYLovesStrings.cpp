#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int a[26],i;
    for(i=0;i<26;i++)
        cin>>a[i];
    int t=0;
    for(i=0;i<s.length();i++)
    {
        t+= a[s[i]-'a']*(i+1);
    }
    sort(a,a+26);
    int maxx= a[25];
    for(i=0;i<n;i++)
    {
        t+= (i+ 1+s.length())*maxx;
    }
    cout<<t;

    return 0;
}
