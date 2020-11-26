#include<bits/stdc++.h>
using namespace std;
string s;
map<char,char>a;
int main()
{
    long long n;
    cin>>n>>s;
    for(long long i='1';i<='9';i++)cin>>a[i];
    long long i=0;
    while(i<n && s[i]>=a[s[i]] )i++;

    while(i<n && s[i]<=a[s[i]])
    {
        s[i]=a[s[i]];
        i++;
    }
    cout<<s;
    return 0;
}
