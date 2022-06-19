#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(int x) 
{
	if(x < 2)return false;
	
	if(x == 2 || x == 3)return true;
	
	for(int i = 2; i <= sqrt(x) ; i++) {
		if(x % i == 0) {
			return false;
		}
	}
	return true;
}

bool isKPrime(int x, int k) {
	set<int> pf;
	for(int i = 2 ; i <= ceil(sqrt(x)) ; i++) {
		if(x != 0 && x % i == 0) {
			while(x != 0 && x % i == 0) {
				x /= i;
			}
			pf.insert(i);
		}
	}
	if(x > 1) {
		pf.insert(x);
	}
	return (pf.size() == k);
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int> > dp(100001, vector<int>(6));
	for(int k = 1 ; k <= 5 ; k++) {
		dp[0][k] = 0;
		dp[1][k] = 0;
		for(int i = 2 ; i < dp.size() ; i++) {
			dp[i][k] = dp[i - 1][k] + (int)(isKPrime(i, k));
		}
	}
	int t;
	cin >> t;
	while(t--) {
		int a, b, k;
		cin >> a >> b >> k;
		cout << dp[b][k] - dp[a - 1][k] << endl;
	}
	return 0;
}
