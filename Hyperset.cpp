#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

char ch[5] = "EST";

char orther(char a,char b)
{
	for(int i=0; i<3; i++)
    {
		if(ch[i] != a && ch[i] != b)
        {
			return ch[i];
		}
	}
}

int main()
{

	int n,k,ans = 0;
	string s;
	set<string> st;

	cin >> n >> k;
	for(int i=1; i<=n; i++)
    {
		cin >> s;
		for(auto it:st)
		{
			string t = "";
			for(int j=0; j<k; j++)
            {
				if(s[j] == it[j])
                {
					t += s[j];
				}
				else
				{
					t += orther(s[j],it[j]);
				}
			}
			ans += st.count(t);
		}
		st.insert(s);
	}
	cout << ans / 2;
	return 0;
}
