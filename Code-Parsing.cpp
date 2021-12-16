#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b=0,c=0;
    string s;cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='x')b++;
        else c++;
    }
    if(b>c)
    {
        for(int i=0;i<b-c;i++)cout<<"x";
    }
    else
    {
        for(int i=0;i<c-b;i++)cout<<'y';
    }
    return 0;
}
