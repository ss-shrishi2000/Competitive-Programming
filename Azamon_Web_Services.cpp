#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
    {
	string s,c;
	cin >> s >> c;
	for(int i=0;i<s.size();i++)
    {
		int c=i;
		for(int j=s.size()-1; j>i; j--)
		{
			if(s[j] < s[c])
				c=j;
		}
		if(c!=i)
		{
			swap(s[i],s[c]);
			break;
		}
	}
	if(s<c)
		cout << s << endl;
	else
		cout << "---" << endl;
	}
	return 0;
}
