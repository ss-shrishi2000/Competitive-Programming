#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    string ans="";
    for(int i=0;i<s.size();)
    {
        if(s.substr(i,3)=="ogo")
        {
            ans+="***";
            i+=3;
            if(s.substr(i,2)=="go")
            {
                while(i<s.size()-1 && s.substr(i,2)=="go")
                {
                    i+=2;
                }
            }
        }
        else
            ans+=s[i],i++;

    }
    cout<<ans;
    return 0;
}
