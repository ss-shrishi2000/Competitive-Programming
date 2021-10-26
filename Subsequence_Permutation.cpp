#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s;cin>>s;
        string p =s;
        sort(p.begin(),p.end());
        int cnt = 0 ;
        for(int i=0;i<l;i++)
        {
            if(s[i] != p[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
