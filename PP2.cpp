
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s[n];
    int a[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];c=0;
        for(int j=0;j<s[i].length();j++)
        {
            if(s[i][j]=='(')c++;
            else c--;
        }
        a[i]=c;
    }
    sort(a,a+n);
    int k=0;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==0){k++;a[i]=10000000,a[j]=1000000;break;}
    }
    }
    cout<<k;
}
