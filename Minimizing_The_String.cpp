#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
	string s;
	cin >> n >> s;
	int p=n-1;
	for (int i=0;i<n-1;++i){
		if (s[i]>s[i + 1])
		{
			p=i;
			break;
		}
	}
	cout << s.substr(0,p) + s.substr(p+1) << endl;
}
