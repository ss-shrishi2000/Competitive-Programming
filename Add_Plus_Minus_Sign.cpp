#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s, ans = ""; cin>>s;
        int cnt = (s[0]-'0');

        for(int i = 1; i < n; i++)
        {
            if(cnt > 0)
                ans += "-", cnt -= (s[i]-'0');
            else
                ans += "+", cnt += (s[i]-'0');
        }
        cout<<ans<<endl;
    }
    return 0;
}
