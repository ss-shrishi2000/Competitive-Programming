#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int calc(string s)
{
    int c = 0;
    for(int i = 0; i < s.size(); i++)
        c += (s[i]-'0');
    return c;
}
lli solve(string s)
{
    lli c = 0;
    for(int i = 0; i < s.size(); i++)
        c = c*10 + (s[i]-'0');

    return c;
}
int main()
{
    lli s, a, b;
    cin>>s;
    string r = to_string(s);
    int x = r.size();
    string x1 = string(x-1, '9');
    //cout<<x1<<endl;
    lli x2 = solve(x1);
    //cout<<x2<<endl;
    lli rem = s - x2;
    int t1 = calc(x1) + calc(to_string(rem));
    cout << t1 ;
    return 0;
}
