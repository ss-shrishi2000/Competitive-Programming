#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s;
    int j=0;
for(int i=0;i<s.length();i+=j)
{
    s1+=s[i];
    j++;
}
    cout<<s1;
    return 0;
}
