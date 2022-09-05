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
        string s[n];
        map<string, int> mp;

        for(int i = 0; i < n; i++)
            cin>>s[i], mp[s[i]]++;

        string ans = "";
        for(int i = 0; i < n; i++)
        {
            string r = s[i];
            int x = r.size();
            string mid = r.substr(0, x/2);
            string mid2 = r.substr(x/2);

            if(x%2==0 && mp.find(mid) != mp.end() && mid == mid2)
            {
                ans += '1';
            }
            else
            {
                bool f = false;
                for(int j = 0; j < r.size(); j++)
                {
                    string q = r.substr(0, j+1);
                    string rem = r.substr(j+1);
                    //cout << q << " strings " << rem << " index " << i << endl;
                    if(mp.find(q) != mp.end() && mp.find(rem) != mp.end())
                    {
                        ans += '1';
                        f = true;
                        break;
                    }
                }
                if(f == false)
                    ans += '0';
            }
        }
        cout << ans << endl;
    }
}
