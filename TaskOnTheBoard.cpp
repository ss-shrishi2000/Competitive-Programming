#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        int n,x;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
            cin>>x,a.push_back(x);

        vector<vector<int> > gr;
        while(true)
        {
            vector<int> pos;
            for(int i=0;i<n;i++)
                if(a[i]==0)
                    pos.push_back(i);

            if(pos.empty()==true)
                break;

            gr.push_back(pos);

            for(int i=0;i<n;i++)
                if(a[i]==0)
                     a[i]=INT_MAX;
                else
                {
                    for(auto it: pos)
                        a[i]-= abs(i-it);
                }
        }
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;

        string rt(n,'.');

        auto j=mp.rbegin();
        for(auto it:gr)
        {
            while(j->second < it.size())
                j++;
            for(int hg:it)
            {
                rt[hg]=j->first;
                cout<<rt[hg]<<" "<<hg<<endl;
            }
            j++;
        }
        cout<<rt<<endl;
    }
    return 0;
}
