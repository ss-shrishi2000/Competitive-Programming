#include<bits/stdc++.h>
using namespace std;
int main()
{
    string y ="31 28 31 30 31 30 31 31 30 31 30 31 31 29 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 29 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31";
    int n;cin>>n;
    cin.ignore();
    string s;getline(cin,s);
    int a;
    a = y.find(s);
    if(a>-1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
