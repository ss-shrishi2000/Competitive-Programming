#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> p({4,8,15,16,23,42});
   	int n;
	cin >> n;
	vector<int> a(n);
	int s[6]{0};
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i] = lower_bound(p.begin(), p.end(), a[i]) - p.begin();
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] == 0)s[0]++;
		else{
			if (s[a[i] - 1] > 0){s[a[i] - 1]--;s[a[i]]++;
			}
		}
	}
	cout << n-s[5]*6 << endl;
}
