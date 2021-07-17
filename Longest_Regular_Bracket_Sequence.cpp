#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int ans, cnt, x = 1;
string s;
int main()
{
	cin >> s;
	st.push(-1);

	for(int i = 0; i < s.size(); i++)
    {
		if(s[i] == '(')
			st.push(i);

		else
        {
		    st.pop();
			if(st.empty())
					st.push(i);
			else
            {
				ans = i - st.top();
				if(ans > cnt){
					cnt = ans;
					x = 1;
				}
				else if (cnt == ans)
				    x++;
			}
		}
	}
	cout << cnt << " " << x << '\n';
	return 0;
}
