#include<bits/stdc++.h>
using namespace std;
int stringtoint(string x)
    {
        int p = 0;
        for(int j = 0; j < x.size(); j++)
        {
            p = p*10 + (x[j]-'0');
        }
        return p;
    }
    vector<string> tovec(string p)
    {
        string r = "";
        vector<string> ar;
        for(int i = 0; i < p.size(); i++)
        {
            if(p[i]==',')
            ar.push_back(r), r = "";
            else
            r+=p[i];
        }
        ar.push_back(r);

        return ar;
    }
int main()
{
    int n;
    cin>>n;
    string s;
    vector<string> transactions;
    for(int i = 0; i < n; i++)
    {
        cin>>s;
        transactions.push_back(s);
    }
    set<string> ans;
        sort(transactions.begin(), transactions.end());
        for(int i = 0; i < transactions.size(); i++)
        cout<<transactions[i]<<" ";

        cout<<endl;
        map<string, string> mp;
        vector<string> res;

        for(int i = 0; i < n; i++)
        {
            string p = transactions[i];
            vector<string> v = tovec(p);
            //v[0] -> name, v[1] -> time, v[2] -> money, v[3] -> place

            string amt = v[2];
            int amount = stringtoint(amt);

            if(amount > 1000)ans.insert(p);
            else
            {
                for(int j = i-1; j >= 0; j--)
                {
                    string q = transactions[j];

                    vector<string> check = tovec(q);
                    if(check[0] != v[0])
                    break;

                    int newt = stringtoint(v[1]);
                    string newcity = v[3];
                    // now check the time difference and city name condition
                    int prevt = stringtoint(check[1]);
                    string prevcity = check[3];

                    if(abs(newt - prevt) <= 60)ans.insert(p), ans.insert(q);
                }
            }
        }
        for(auto it = ans.begin(); it!=ans.end(); it++)
        res.push_back(*it);


    for(int i = 0; i < res.size(); i++)
        cout<<res[i]<<" ";

    return 0;
}
