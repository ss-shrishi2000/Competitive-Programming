#include<bits/stdc++.h>
using namespace std;
void stop()
{
    cout<<"No solution";
    exit(0);
}
int main()
{
    string s;cin>>s;
    int cnt=0;
    bool flag=true;
    if(s[0]=='@' || s[s.size()-1]=='@')stop();
    for(int i=0;i<s.size();i++)
    {
        if(i!=0 && (s[i-1]=='@') && (s[i+1]=='@' || (s[i]=='@')))stop();
        if(s[i]=='@')cnt++;
    }
    if(cnt==0)stop();
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
        if(flag==false && cnt!=0)
        {
            cout<<",";flag=true;
        }
        else if(s[i]=='@')
        {
            flag=false;cnt--;
        }
    }
    return 0;
}
