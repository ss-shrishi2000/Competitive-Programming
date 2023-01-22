#include<bits/stdc++.h>
using namespace std;
long conv(string t)
{
    long y = 0;
    for(int i = 0; i < t.size(); i++)
    {
        y = y*10 + (t[i]-'0');
    }
    return y;
}
bool valid(string p)
{
    string k1 = "http://";
    string k2 = "https://";

    if(p.substr(0, 7) == k1 || p.substr(0, 8) == k2)
        return 1;

    return 0;
}
bool valid2(string key)
{
    if(key.size() < 2 || key.size() > 12)
        return 0;

    for(int i = 0; i < key.size(); i++)
    {
        if(isalpha(key[i]) || isdigit(key[i]))
        {
            continue;
        }
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    map<string, string> lastused;
    map<string, long> lastTime;
    while(n--)
    {
        string t, url, key, userId;
        cin >> t >> url >> key >> userId;
        bool f = valid(url);
        if(!f)
        {
            cout<<"NO"<<endl;
            continue;
        }

        bool f1 = valid2(key);
        if(!f1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(lastused.find(key) != lastused.end())
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            lastused[key] = conv(t);
        }

        if(lastTime.find(userId) != lastTime.end())
        {
            long lastUsed = lastTime[userId];
            long current = conv(t);
            if(current - lastUsed <= 5){
                cout << "NO\n";
                continue;
            }
            else
            {
                lastTime[userId] = conv(t);
            }
        }
        else{
            lastTime[userId] = conv(t);
        }

        cout<<"YES"<<endl;
    }
    return 0;
}
