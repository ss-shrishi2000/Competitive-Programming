#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;cin>>p;
    long long q=1,a[5];
    string s;
    for(int i=4;i>=0;i--)
    {
        a[i]=p%10;
        p=p/10;
    }
    s=to_string(a[0])+to_string(a[2])+to_string(a[4])+to_string(a[3])+to_string(a[1]);
    int r=stoi(s);
    for(int i=1;i<=5;i++)
    {
        q*=r;
        q=q%100000;
    }
    if(q==0)cout<<"00000";
    else
    cout<<q;
}

