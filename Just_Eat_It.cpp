
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string ans = "YES\n";
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
			if(sum <= 0) ans = "NO\n";
		}
		sum = 0ll;
		for (int i = n - 1; i > -1; i--) {
			sum += a[i];
			if(sum <= 0) ans = "NO\n";
		}
		cout << ans;
	}
	return 0;
}
