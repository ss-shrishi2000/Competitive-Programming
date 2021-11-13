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
        if(s.size()==2)
        {
            if(s[0]<s[1])
                cout<< s[0] << " " << s[1] << endl;
            else
                cout<< s[1] << " " << s[0] << endl;
        }
        else
        {
            string p = s;
            sort(p.begin(),p.end());
            char r = p[0];
            int j=0;
            while(j<s.size())
            {
                if(s[j]!=r)
                   j++;
                else
                    break;
            }
            string b = s.substr(0,j);
            if(j!=s.size())
                b+=s.substr(j+1);

            cout<< r << " " << b << endl;
        }
    }
}
