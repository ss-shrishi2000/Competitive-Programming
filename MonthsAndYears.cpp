#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;cin>>n;
    string s1="312831303130313130313031";
    string s2="312931303130313130313031";
    string s3="",s4="";
    s3=s1+s1+s2+s1+s1;
    for(int i=0;i<n;i++)
    {
        cin>>p;s4+=to_string(p);
    }
    if(s3.find(s4)!=-1)
    {
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}

