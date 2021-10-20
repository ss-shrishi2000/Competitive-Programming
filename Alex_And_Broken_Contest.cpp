#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    string s1="Danil",s2="Olya",s3="Slava",s4="Ann",s5="Nikita";
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,5)==s1 || (s.substr(i,4)==s2) || (s.substr(i,5)==s3) || (s.substr(i,3)==s4) || (s.substr(i,6)==s5))
            cnt++;
    }
    if(cnt==1)
        cout<<"YES";
    else 
        cout<<"NO";
    
    return 0;
}
