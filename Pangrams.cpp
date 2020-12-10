#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[tolower(s[i])]++;
    }
    for(char c='a';c<='z';c++)
    {
        if(mp[c]<1){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
