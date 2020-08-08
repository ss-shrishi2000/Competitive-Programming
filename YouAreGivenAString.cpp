#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<string,int> mp;
    int n=s.size();
    for(int l=1;l<=n;l++)
    {
        for(int i=0;i<=n-l;i++)
        {
            int j=i+l-1;
            string p="";
            for(int k=i;k<=j;k++)
            {
                p+=s[k];
            }
            mp[p]++;
        }
    }
    int m=0;
    for(auto c:mp)
    {
        string a=c.first;
        int x=a.size();
        if(c.second>=2)m=max(m,x);
    }
    cout<<m;
}
