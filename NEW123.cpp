
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	vector<int>h;
	//take user input as Height
	cin>>n;
	for(int i=0;i<n;i++)cin>>x,h.push_back(x);
	int left[100005];
	stack<int>s;
	int pseudoindex=-1;
	int j=0;
	left[j++]=-1;
	for(int i=0;i<n;i++)
	{

		if (s.empty()!=true and h[i]>h[s.top()])left[j++]=s.top();

		else if (s.empty()==false and h[i]<h[s.top()]);
		{
			while(s.empty()!=true and h[i]<h[s.top()]){cout<<s.top()<<endl;s.pop();}

			if(s.empty()!=true)left[j++]=s.top();
			else left[j++]=-1;
		}
		s.push(i);
	}
	for(int i=0;i<j;i++)cout<<left[i]<<" ";
	return 0;
}
