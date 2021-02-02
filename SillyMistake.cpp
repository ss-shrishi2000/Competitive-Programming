#include<bits/stdc++.h>
using namespace std;
const int maxn = 1000007;
bool mp[maxn];
int lst[maxn];
int main()
{
	int n;cin>>n;
	int s1= 0,ptr=0;
	vector<int> v;
	for(int i=1;i<= n;++i)
    {
		int x;cin >> x;
		if(x>0)
		{
			if(mp[x])
			{
			    cout<<-1;
			    return 0;
			}
			if(lst[x]>ptr)
            {
                cout<<-1;
			    return 0;
            }
			mp[x] = true;
			s1++;
		}
		else
        {
			x = -x;
			if(!mp[x])
            {
            cout<<-1;
            return 0;
			}
			s1--;
			mp[x] = false;
			lst[x] = i;
		}
		if(s1== 0)
        {
			v.push_back(i-ptr);
			ptr = i;
		}
	}
	if(s1>0)
    {
       cout<<-1;
      return 0;
    }
	cout<<v.size()<<endl;
	for(auto it:v)
	     cout<<it<<" ";

	return 0;
}
