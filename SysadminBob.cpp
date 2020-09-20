#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int c=0,l=s.size();
    int d[l+1],j=0,x=0;
    memset(d,0,sizeof(d));
    if(s[0]=='@' or s[l-1]=='@')
    {
    cout<<"No solution";return 0;
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]=='@')c++;
        if(s[i]!='@')x++;
        else{
            d[j++]=x;
            x=0;
        }
    }
    for(int i=1;i<j;i++)
    {
        if(d[i]<2){
            cout<<"No solution";
            return 0;
        }
    }
    if(c==0)
    {
        cout<<"No solution";return 0;
    }
    for(int i=0;i<l;i++)
    {
        cout<<s[i];
        if (s[i]=='@' && c!=1){
        c--;cout<<s[i+1]<<',';
        i++;
        }
    }
    return 0;
}
