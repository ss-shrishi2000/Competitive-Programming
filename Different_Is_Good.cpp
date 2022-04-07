#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
	cin >> n;
	string s;
	cin >> s;
	set<char>p;
	for(int i=0;i<n;i++)
		p.insert(s[i]);
	if(n>26)
		cout<<-1;
	else 
		cout << s.length()-p.size();
	return 0;
}
