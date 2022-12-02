#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=0;
    cin>>n>>m;
    set<string> s;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        s.insert(str);
    }
    for(int j=0;j<m;j++)
    {
        cin>>str;
        s.insert(str);
    }
    if((n+m-s.size())%2)
        n++;
    if(n>m)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}
