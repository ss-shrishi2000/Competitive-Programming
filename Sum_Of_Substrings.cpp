#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long int ans = 0, first_pos = -1, last_pos = -1;
        int cnt = 0, left = INT_MAX, right = INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                left = min(left, i);
                right = max(right, i);
                cnt++;
            }
        }
        ans=0;
		if(cnt>0 && n-1-right <= k)
        {
			ans++;cnt--;
			k -= n-1-right;
		}
		if(cnt>0 && left<=k)
		{
			ans+=10;cnt--;
			k -= left;
		}
		ans += cnt*11;
        cout<<ans<<endl;
    }
    return 0;
}
