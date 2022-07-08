#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool f=true;
    int l=s.size();
    for(int i=0;i<l-26;i++)
    {
        int a[26];
        memset(a,0,sizeof(26));
        string p=s.substr(i,26);
        for(int j=0;j<26;j++)
        {
            int x=p[j]-'A';
            a[x]++;
            if(a[x]>1){f=false;}break;
        }
        for(int k=0;k<26;i++)
        {

        }
    }
}
