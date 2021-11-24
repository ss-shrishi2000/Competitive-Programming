#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;cin >> n >> k;
		string s;cin >> s;
		int cnt=1, i;

		for(i=0;i<n;i++)
        {
			if(s[i]=='*')
				break;
		}
		while(true)
        {
			int j = min(n-1,i+k);
			for(;i<j;j--)
			{
				if(s[j]=='*')
                {
					break;
				}
			}
			if(i==j)
            {
				break;
			}
			cnt++;
			i = j;
		}
		cout << cnt << endl;
    }
    return 0;
}
