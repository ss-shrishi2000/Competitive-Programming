#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int isSemiPrime(int x) {
	int cnt = 0;
	for (int i = 2; cnt < 2 && i*i <= x; ++i) {
		if (x%i == 0) {
			++cnt;
			x /= i;
			if (x%i == 0)
				return 0;
		}
	}
	if (x > 2)
		++cnt;

	return cnt == 2;
}

int main(){
    int t;cin>>t;
    while(t--)
    {
		int n;
		cin>>n;
		string ans = "NO";
		int i = 1;
		while (i <= n/2) {
			int a = i, b = n - i;
			if (isSemiPrime(a) && isSemiPrime(b)){
				ans = "YES";
				break;
			}
			++i;
		}
		cout<<ans<<endl;
	}
    return 0;
}
