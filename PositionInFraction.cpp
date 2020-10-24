#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;cin>>a>>b>>c;
    int pos=0;
    bool f=false;
    double x=a/b;
    string s=to_string(x);
    cout<<s<<endl;
    for(int i=1;i<s.size();i++)
    {
        if((s[i]-'0')==c)
        {
            f=true;
            pos+=1;
            break;
        }
        else pos++;
    }
    if(f==false)cout<<-1;
    else cout<<pos;
    return 0;
}
