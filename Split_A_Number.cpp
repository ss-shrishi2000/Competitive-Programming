#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int l=s.size()/2;
    if(s.size()%2==0)
    {
        long long int x=stol(s.substr(0,l));
        long long int y=stol(s.substr(l,l));
        cout<<x+y;
    }
    else{
            int p=l+1;
        long long int x=stol(s.substr(0,p));
        long long int y=stol(s.substr(l+1,l));
        cout<<x+y;
    }
}
