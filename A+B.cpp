#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string x = "", y = "";
        int tr, xr = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '+')
            {
                x = s.substr(0, i);
                for(int j = 0; j < x.size(); j++)
                {
                    xr = xr*10 + (x[j]-'0');
                }
                tr = i;
                break;
            }
        }
        y = s.substr(tr+1);
        int yr = 0;
        for(int j = 0; j < y.size(); j++)
        {
            yr = yr*10 + (y[j]-'0');
        }
        cout<<xr+yr<<endl;
    }
    return 0;
}
