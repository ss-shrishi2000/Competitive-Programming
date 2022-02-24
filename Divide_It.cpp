#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
	cin >> q;
	for (int i = 0; i < q; ++i) 
	{
		long long n;
		cin >> n;
		int c2 = 0, c3 = 0, c5 = 0;
		while (n % 2 == 0) 
		{
			n /= 2;
			++c2;
		}
		while (n % 3 == 0) 
		{
			n /= 3;
			++c3;
		}
		while (n % 5 == 0) 
		{
			n /= 5;
			++c5;
		}
		if (n != 1) 
		{
			cout << -1 << endl;
		}
		else
		{
		      cout << c2 + c3 * 2 + c5 * 3 << endl;
		}
	}
	return 0;
}
