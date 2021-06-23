#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s="";
    k-=n;
    while(k!=0)
    {
        int val=min(25,k);
        k-=val;
        s.push_back(char('a')+val);
    }
    for(int i=s.size();i<n;i++)
        s.push_back('a');

    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}
