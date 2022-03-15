#include<bits/stdc++.h>
using namespace std;

int valid(string s, int x)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i % x])
            return 0;
    }
    return 1;
}
int main()
{
    string s1, s2; cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    int x = min(s1.size(), s2.size());
    int cnt=0;
    for (int i = 1; i <= x; i++)
    {
        if (n % i == 0 and m % i == 0)
        {
            if (s1.substr(0, i) == s2.substr(0, i) and valid(s1, i) and valid(s2, i))
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}
