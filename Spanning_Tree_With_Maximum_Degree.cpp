#include<bits/stdc++.h>

using namespace std;

const int mxn = 2e5 + 10;

vector<int> adj[mxn];
bool vis[mxn];

void bfs(int s)
{
	queue<int> q;
	q.push(s);
	vis[s] = true;
	while(!q.empty())
    {
		int s = q.front();
		q.pop();
		for(auto i : adj[s])
		{
			if(vis[i]==false)
			{
			cout<< s << " " << i <<endl;
			q.push(i);
			vis[i] = true;
			}
		}
	}
}

int main()
{
	int n, m;
	cin>>n>>m;
	int u, v;
	for(int i = 0; i < m; i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int mxdeg = 0, indx = -1;
	for(int i = 1; i <= n; i++)
    {
		if(adj[i].size() > mxdeg)
		{
			mxdeg = adj[i].size();
			indx = i;
		}
	}
	bfs(indx);

	return 0;
}
