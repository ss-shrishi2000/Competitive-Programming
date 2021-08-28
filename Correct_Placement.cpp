#include<bits/stdc++.h>
using namespace std;
# define maxn 10000000
struct node
{
	int x, y, id;
	bool operator < (const node &a) const{
		if(x == a.x)
			return y < a.y;
		return x < a.x;
	}
}a[maxn];

int ans[maxn];

int main()
{
	int t, n;
	cin>>t;
	while(t --)
    {
		cin >> n;
		for(int i = 1; i <= n; i ++)
        {
			cin >> a[i].x >> a[i].y;
			if(a[i].x > a[i].y)
			      swap(a[i].x, a[i].y);

			a[i].id = i;
            ans[i] = -1;
		}
		sort(a + 1, a + n + 1);
		int tmp = 0x3f3f3f3f, id = -1, j = 1;

		for(int i = 1; i <= n; i ++)
        {
			while(j < i && a[j].x < a[i].x)
			{
				if(tmp > a[j].y)
				{
					tmp = a[j].y;
					id = a[j].id;
				}
             j++;
			}
			if(tmp < a[i].y)
                ans[a[i].id] = id;
		}
		for(int i = 1; i <= n; i ++)
			cout << ans[i]<<" ";

		cout << endl;
	}
	return 0;
}
