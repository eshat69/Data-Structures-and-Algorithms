#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> bfs(int v, vector<int> adj[]) {
    vector<int> vis(v, 0);
    vector<int> bfsResult;
    queue<int> q;
    vis[0] = 1;
    q.push(0);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfsResult.push_back(node);
        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfsResult;
}
int main() {
    int v = 4;
    vector<int> adj[v];
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 3};
    adj[3] = {1, 2};
    vector<int> result = bfs(v, adj);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}
