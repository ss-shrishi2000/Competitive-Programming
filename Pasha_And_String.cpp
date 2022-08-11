#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    int a[200005],x,p=s.size();
    for(int i=0;i<m;i++)
    {
        cin>>x;
        a[x-1]++;
    }
    for(int i=0;i<p/2;i++)
    {
        if(i!=0)a[i]+=a[i-1];
            if(a[i]%2!=0)
                swap(s[i],s[p-i-1]);
    }
    cout<<s;
    return 0;
}
