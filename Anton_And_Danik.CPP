#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int a[2]{0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='D')a[0]++;
        else a[1]++;
    }
    if(a[0]==a[1])
        cout<<"Friendship";
    else if(a[0]>a[1])
        cout<<"Danik";
    else 
        cout<<"Anton";
    return 0;
}
