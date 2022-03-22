#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c[3]{0};
    for(int i=0;i<n;i++)
        c[s[i]-'0']++;
    int x=n/3;
    for(int i=0;i<n;i++)
    {
        int k=s[i]-'0';
        if(c[k]>x)
        {
        for(int j=0;j<k;j++)
        {
            if(c[j]<x)
            {
                s[i]=(char)'0'+j;
                c[j]++;
                c[k]--;break;
            }
        }
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        int k=s[i]-'0';
        if(c[k]>x)
        {
            for(int j=2;j>k;j--)
            {
                if(c[j]<x)
                {
                    s[i]=(char)'0'+j;
                    c[j]++;
                    c[k]--;
                    break;
                }
            }
        }
    }
    cout<<s;
    return 0;
}
