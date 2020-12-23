#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=')')break;
            else
                cnt++;
        }
        if(cnt > s.size()-cnt )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
