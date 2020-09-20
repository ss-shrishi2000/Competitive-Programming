#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,ans;cin>>s;
        int k;cin>>k;
        int n=s.size();
		string w = string(n, '1');
		for (int i = 0; i < n; i++)
        {
			if (s[i] == '0')
			{
				if (i - k >= 0)w[i - k] = '0';
				if (i + k < n)w[i + k] = '0';
			}
		}
		bool f= true;
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') continue;
			if (i - k >= 0 && w[i - k] == '1')continue;
			if (i + k < n && w[i + k] == '1')continue;
			f=false;
		}

		if(f) cout<<w<<endl;
		else cout<<-1<<endl;
    }
}
