#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i]=='(')
                c++;
            else
            {
                c--;
                if(c<0)
                    ans = min(ans, c);
            }
        }
        cout<<abs(ans)<<endl;
    }
    return 0;
}
