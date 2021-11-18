#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;            //search for the leftmost smallest even number than last digit
    int l=s.size(),p1=-1;
    if((s[l-1]-'0')%2==0){cout<<s;return 0;}
    for(int i=0;i<l;i++)
    {
        if((s[i]-'0')%2==0){p1=1;break;}
    }
    if(p1==-1){cout<<-1;return 0;}
    int r=-1;
    for(int i=0;i<l;i++)
    {
        if((s[i]-'0')%2==0 and (s[i]<s[l-1]))
        {
            swap(s[i],s[l-1]);
            cout<<s;
            return 0;
        }
    }
    for(int j=l-2;j>=0;j--)
    {
        if((s[j]-'0')%2==0)
        {
            swap(s[j],s[l-1]);
            cout<<s;
            return 0;
        }
    }
}
