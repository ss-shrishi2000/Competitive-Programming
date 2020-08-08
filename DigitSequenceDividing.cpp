#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s,s1;cin>>s;
        int l=s.size();
        if(l==2 && (s[0]==s[1] || (s[0]>s[1])))cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl<<2<<endl;
            cout<<s[0]<<" "<<s.substr(1,l-1)<<endl;
        }
    }
}
