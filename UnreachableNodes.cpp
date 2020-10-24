#include <iostream>
#include<vector>
using namespace std;
int bfs(vector<bool> k,vector<vector<int> > b,int c)
{if(k[c]==true)
return 0;
k[c]=true;
int d=0;
d++;
	for(unsigned int i=0;i<b[c].size();i++)
	{d+=bfs(k,b,b[c][i]);

	}
	return d;
}
int main()
{
    int N;
    cin>>N;
    vector<vector<int> > a(N+1);
    vector<bool> e(N+1,false);
    int t;
    cin>>t;
    while(t--)
    {
    	int x,y;
    	cin>>x>>y;
    	a[x].push_back(y);
    	a[y].push_back(x);
    }
    int k;
    cin>>k;
    int ff=bfs(e,a,k);
    cout<<(N-ff);
    return 0;
}
