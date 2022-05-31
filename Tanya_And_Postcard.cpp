#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    map<char, int> mp;
    for(int i=0; i<t.size(); i++)
        mp[t[i]]++;

    int yay = 0, whoops = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(mp[s[i]]>0)
        {
            yay++;
            mp[s[i]]--;
            s[i] = '*';
        }
    }
    for(int i=0; i<s.size(); i++)
    {
       if(s[i]!='*')
       {
           if( islower(s[i]) && mp[toupper(s[i])]>0 )
                  mp[toupper(s[i])]--, whoops++;
           else if( isupper(s[i]) && mp[tolower(s[i])]>0)
                  mp[tolower(s[i])]--, whoops++;
       }
    }

    cout<< yay << " " << whoops << endl;
    return 0;
}
