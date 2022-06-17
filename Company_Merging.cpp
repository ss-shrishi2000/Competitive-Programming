#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,ans= 0,a,d,m = 0,m1;
	cin >> n;
	vector <pair <long long, long long> > v(n);
	for (int i = 0; i < n; i++)
    {
		cin >> a;
		m1 = 0;
		for (int j = 0; j < a; j++)
        {
			cin >> d;
			if (d > m1)
				m1 = d;
		}
		//where m is the largest entry in the whole input whereas m1 is the largest entry within the whole row
		if (m1 > m)
			m = m1;
		v[i] = make_pair(m1, a);
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i].first != m)
		{
			ans+= (m - v[i].first) * v[i].second;
		}
	}
	cout<<ans;
	return 0;
}
