#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,x=0;cin>>V;
    vector<int> graph[V];
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(4);
    graph[1].push_back(5);
    graph[2].push_back(5);
    graph[2].push_back(6);
    graph[6].push_back(7);
    int level[V];
    bool marked[V];

    // create a queue
    queue<int> que;

    // enqueue element x
    que.push(x);
    // initialize level of source node to 0
    level[x] = 0;
    // marked it as visited
    marked[x] = true;

    // do until queue is empty
    while (!que.empty()) {

        // get the first element of queue
        x = que.front();

        // dequeue element
        que.pop();

        // traverse neighbors of node x
        for (int i = 0; i < graph[x].size(); i++) {
            // b is neighbor of node x
            int b = graph[x][i];

            // if b is not marked already
            if (!marked[b]) {

                // enqueue b in queue
                que.push(b);

                // level of b is level of x + 1
                level[b] = level[x] + 1;

                // mark b
                marked[b] = true;
            }
        }
    }

     // display all nodes and their levels
    cout << "Nodes"
         << "    "
         << "Level" << endl;
    for (int i = 0; i < V; i++)
        cout << " " << i << "   -->   " << level[i] << endl;
}
