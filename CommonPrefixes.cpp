#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n;cin>>n;
    int a;
    string s=string(200,'a');
    cout<<s<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s[a]=(s[a]=='a')?'b':'a';
        cout<<s<<endl;
    }
    }
}
