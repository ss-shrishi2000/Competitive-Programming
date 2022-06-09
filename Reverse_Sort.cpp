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
        string s, s1;
        cin>>s;
        s1 = s;
        vector<int> ans;
        sort(s.begin(), s.end());
        for(int i=0; i<s.size();i++)
        {
            if(s[i]!=s1[i])
            {
                ans.push_back(i+1);
            }
        }
        if(ans.size() == 0)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<1<<endl;
        cout<<ans.size()<<" ";
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<< " ";
        cout<<endl;
    }
    return 0;
}
