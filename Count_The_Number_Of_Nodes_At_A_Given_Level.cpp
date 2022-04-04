#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector <int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int countNodes(int root, vector <int> graph[], int level, int n)
{
    vector <bool> visited(n,false);
    unordered_map<int,int> ump;
    // BFS queue
    // stores {node value, node level}
    queue <pair<int,int>> q;
    // root is at first level
    int L=1;
    // push root into queue
    q.push({root,L});

    // Perform BFS traversal
    // Traverse each node and find their level in the tree
    while(!q.empty())
    {
        auto front = q.front();
        q.pop();

        visited[front.first] = true;
        // Increase number of nodes at that level by 1
        ump[front.second]++;

        // Visit all the neighbor nodes of the popped node
        for(auto node : graph[front.first])
        {
            if(!visited[node])
                q.push({node,front.second+1});
        }
    }

    return ump[level];
}
int main()
{
    // define number of nodes & root node
    int n = 10;
    int root = 0;
    // construct the graph & link the nodes by edges
    vector <int> graph[n];
    vector <pair<int,int>> edges = {{0,1},{0,2},{1,3},{1,4},{1,5},{4,6},{2,6},{6,7},{6,9}};
    for(auto e : edges)
    addEdge(graph,e.first,e.second);

    // define level
    int L =3;
    cout<<"Number of Nodes at 3rd Level = "<<countNodes(root,graph,L,n)<<endl;

    return 0;
}
