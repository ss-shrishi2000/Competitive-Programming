#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
const int maxn = 2e5 + 5;
#define inf 1e18
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		cin>>n;
		ll Lval = inf;
		ll Rval = inf;
		ll L = inf;
		ll R = -1;
		ll LR = inf;
		ll l, r, c;
		for(int i = 0; i < n; i++)
        {
			cin>>l>>r>>c;
			if(r > R){
				Rval = inf;
				LR = inf;
				R = r;
			}
			if(l < L){
				Lval = inf;
				LR = inf;
				L = l;
			}
			if(r == R){
				Rval = min(Rval, c);
			}
			if(l == L){
				Lval = min(Lval, c);
			}
            //when both are within the same segment
			if(l == L && r == R){
				LR = min(LR, c);
			}
			cout<<min(LR, Lval + Rval)<<endl;
		}
	}
}
