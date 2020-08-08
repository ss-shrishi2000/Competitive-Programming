#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int check(long long b, string s)
{
	string a=to_string(b+1);
	if(s.size()<a.size())return s.size();
	else return s.size()-1;
}
int main()
{
    fast;
	long long t;cin >> t;
	fo(i,t)
    {
		long long a;
		string b;cin>>a>>b;
		long long n= stoi(b);
		cout << a*check(n, b) << endl;
	}
}
