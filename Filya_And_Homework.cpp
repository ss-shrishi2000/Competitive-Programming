#include<bits/stdc++.h>
using namespace std;
int main()
{
        set<int> s;
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	bool f=false;
	if (s.size() <= 2)
        f= true;
	else if (s.size() == 3)
	{
		int a = *s.begin(), b = *s.rbegin();
		if (((b - a) % 2 == 0) && (s.find((a + b) / 2) != s.end()))
		                 f=true;
	}
	if (f)
	cout << "YES";
	else
	cout << "NO";
	return 0;
}
