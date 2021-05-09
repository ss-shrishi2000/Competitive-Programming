#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
		lli da=min(n, a - x);
		lli db = min(n, b - y);
		lli a1 = a - da;
		lli b1 = max(b-(n - da), y);
		lli b2 = b - db;
		lli a2 = max(a - (n - db), x);
		cout << min(a1 * b1, a2 * b2) << "\n";
    }
    return 0;
}
