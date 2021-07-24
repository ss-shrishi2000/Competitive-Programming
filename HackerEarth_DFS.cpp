#include <bits/stdc++.h>

using namespace std;

bool visited[10002];

int level[100002];

int ans=0;

// int n;

int dfs(int root,vector<int> v[],int n){

    queue<int> q;

    q.push(root);

    visited[root]=true;

    level[root]=0;

    while(!q.empty()){

        int r=q.front();



        q.pop();

        for(int i=0;i<(int)v[r].size();i++){

            if(!visited[v[r][i]]){

                level[v[r][i]]=level[r]+1;

                ans=level[v[r][i]];

                q.push(v[r][i]);

                if(v[r][i]==n)return ans;

                visited[v[r][i]]=true;

            }

        }

    }

    return ans;

}

int main(){

    int t;

    cin>>t;

    while(t-->0){

        memset(visited,0,sizeof(visited));

        ans=0;

        int n,m;

        // int root;

        cin>>n>>m;

        vector<int> v[n+1];

        // int distance[n+1];

        // for(int i=0;i<=n;i++)distance[i]=INT_MAX;

        for(int i=0;i<m;i++){

            int a,b;

            cin>>a>>b;

            // if(i==0)root = a;

            v[a].push_back(b);

            v[b].push_back(a);

        }

        cout<<dfs(1,v,n)<<endl;

    }

}
