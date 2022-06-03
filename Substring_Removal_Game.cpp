#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s; cin>>s;
        vector<int> v;
        for(int i=0; i<s.size();)
        {
            if(s[i]=='1')
            {
                int c = 0;
                while(i<s.size() && s[i]=='1')
                    i++, c++;
                v.push_back(c);
            }
            else
                i++;
        }
        sort(v.begin(), v.end(), greater<int>());
        int ans = 0;
        for(int i=0; i<v.size(); i+=2)
            ans+=v[i];
        cout<<ans<<endl;
    }
    return 0;
}
