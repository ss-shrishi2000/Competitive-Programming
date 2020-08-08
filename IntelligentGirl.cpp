#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10010
int a[MAX];

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    if((s[l-1]-'0')%2==0)a[l-1]=1;
    else a[l]=0;
    for(int i=l-2;i>=0;i--)
    {
        if((s[i]-'0')%2==0)a[i]=a[i+1]+1;
        else a[i]=a[i+1];
    }
    for(int i=0;i<len;i++)cout<<a[i]<<" ";
    return 0;
}
