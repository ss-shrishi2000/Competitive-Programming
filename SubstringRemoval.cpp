#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    string s;
    cin >> s;
    long long int ans = 0;
    long long int rep = 0;
    for(int i = 0;i < 26;i++)
    {
        char gg = ('a' + i);
        long long int l = 0, r = n - 1;
        while(s[l] == gg)
        l++;
        while(s[r] == gg)
        r--;
        if (l == 0 && r == n - 1)
        continue;
        rep++;
        ans += ((l + 1) * (n - r));
        ans %= 998244353;
    }
    cout << ans - rep + 1;
    return 0;
}
