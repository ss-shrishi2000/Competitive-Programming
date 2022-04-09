#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        int b=0;
        cin>>s>>t;
        for(int i=0; i<s.size(); i++)
        {
            string s1=s.substr(0,i+1);
            string s2=s.substr(0,i);
            reverse(s2.begin(),s2.end());
            s1+=s2;
            if(s1.find(t)!=-1)
            {
                b=1;
                break;
            }
        }
        cout<<(b?"YES":"NO")<<"\n";
    }
    return 0;
}
