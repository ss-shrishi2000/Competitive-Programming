#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x,f[n+10]{0};
        for(int i=0;i<n;i++){cin>>x;f[x]++;}
        sort(f,f+n+1,greater<int>());
        int ans = f[0];
		int l = f[0];
		for (int i = 1; i <= n; ++i) {
			if (l == 0) break;
			if (f[i] >= l) {
				ans += l - 1;
				l -= 1;
			}
			else {
				ans += f[i];
				l = f[i];
			}
		}
		cout << ans << endl;
	}
}
