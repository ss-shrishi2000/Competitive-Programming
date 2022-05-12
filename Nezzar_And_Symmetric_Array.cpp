#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin >> n;
		map<ll, ll,greater<ll>> ma;
		int f = 0;
		for (int i = 1;i <= 2 * n;i++)
		{
			ll a;
			cin >> a;
			ma[a]++;
			if (a % 2 == 1)f = 1;
		}
		for (auto i = ma.begin();i != ma.end();i++)
		{
			if (i->second != 2)
                f = 1;
		}
		if (f)
            cout << "NO" << endl;
		else
		{
			ll n = ma.size(), s = 0;
			for (auto i = ma.begin();i != ma.end();i++)
			{
				if (i->first/2-s <= 0 || (i->first/2-s) % n != 0)
				{
					f = 1;break;
				}
				s += (i->first / 2 - s) / n;
				n--;
			}
			if (f)
			cout << "NO" << endl;
			else
			cout << "YES" << endl;
		}
    }
}
