#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long k,n,p,a,b;cin>>k>>n>>a>>b;
        k=k-n*a;
        if(k>0)cout<<n<<endl;
        else {
                k = -k;
			++k;
			long long diff = a - b;
			long long turns = (k + diff - 1) / diff;
			if (turns > n) {
				cout << -1 << '\n';
			} else {
				cout << n - turns << '\n';}
        }
    }
}
