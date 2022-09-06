#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ans = "";
    cin>>s;
    int i = 0;
    for(; i < s.size();)
    {
        if(s.substr(i,4) == "http" || s.substr(i,3) == "ftp")
        {
            if(s.substr(i,4) == "http")
                ans+="http://", i+=4;
            else
                ans+="ftp://", i+=3;
        }
        break;
    }

    string rem = "";
    int j;
    for(j = s.size()-1; j>=0; j--)
    {
        if(s.substr(j,2) == "ru")
        {
            //cout<<i << " i , j " << j<<endl;
            //cout<<s.substr(i)<<endl;
            ans += s.substr(i);
            int k = ans.size()-1;
            while(k>=0 && ans.substr(k-1,2) != "ru")
            {
                ans.pop_back();
                k = ans.size() - 1;
            }
            ans.pop_back();
            ans.pop_back();
            ans += ".ru/";
            j+=2;
            break;
        }
    }
    if(j<s.size())
    {
        ans += s.substr(j);
    }
    else
    {
        ans.pop_back();
    }
    cout<<ans;
    return 0;
}
