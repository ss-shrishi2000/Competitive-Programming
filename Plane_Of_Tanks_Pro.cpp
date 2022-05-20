#include<bits/stdc++.h>
using namespace std;
#define pii pair<string, double>
#define pss pair<string, string>
int main()
{
    int n; cin>>n;
    pii pr[n];

    for(int i=0; i<n; i++)
        cin >> pr[i].first >> pr[i].second;

    vector<pss> vec;
    map<string,double> mp;

    for(int i=0; i<n; i++)
    {
        pii r = pr[i];
        if(mp.find(r.first)==mp.end())
        {
            mp[r.first] = r.second;
        }
        else
        {
            if(mp[r.first] < r.second)
            {
                mp[r.first] = r.second;
            }
        }
    }
    vector<pair<double, string>> vr;

    for(auto it:mp)
        vr.push_back(make_pair(it.second, it.first));

    int ny = vr.size();

    for(int i=0; i<ny; i++)
    {
        int x = 0;
        for(int j = 0; j<ny; j++)
        {
            if(vr[j].first <= vr[i].first)x++;
        }

        if(x*100 >= ny*99)
            vec.push_back(make_pair(vr[i].second, "pro"));
        else if(x*100 >= ny*90)
            vec.push_back(make_pair(vr[i].second, "hardcore"));
        else if(x*100 >= ny*80)
            vec.push_back(make_pair(vr[i].second, "average"));
        else if(x*100 >= ny*50)
            vec.push_back(make_pair(vr[i].second, "random"));
        else
            vec.push_back(make_pair(vr[i].second, "noob"));
    }
    cout<<vec.size()<<endl;

    for(int i=0; i<vec.size(); i++)
        cout<<vec[i].first << " " << vec[i].second << endl;
    return 0;
}
