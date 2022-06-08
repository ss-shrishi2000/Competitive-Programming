#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0,y=0;
    if(s.size() % 2)
    {
        cout<<-1;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L')x--;
        else if(s[i]=='R')x++;
        else if(s[i]=='U')y++;
        else y--;
    }
    if(x==0 && y==0)
        cout<<0;
    else{
        cout<<(abs(x)+abs(y))/2;
    }
    return 0;
}
