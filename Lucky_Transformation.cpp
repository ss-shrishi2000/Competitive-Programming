#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    for(int i=0;i<s.size()-1 && (k);i++)
    {
        if(s[i]=='4' && s[i+1]=='7')
        {
            if(i%2==0){s[i]='4';s[i+1]='4';}
            else if(i>0 && (s[i-1]=='4'))
            {
                if(k%2!=0)s[i]='7';
                else s[i]='4';
                break;
            }
            else s[i]='7';
            k--;
        }
    }
    cout<<s;
}
