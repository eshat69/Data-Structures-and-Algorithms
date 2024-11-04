#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grp(n + 1);
    vector<int> distance(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        grp[a].push_back(b);
        grp[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    distance[1] = 0;
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        cout << "currently on:" << current << endl;
        for (auto node : grp[current])// for(int i=0;i<grp[current].size();i++)
        {
            if (distance[node] == -1)
            {
                distance[node] = distance[current] + 1;
                q.push(node);
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << "Node:" << i << " is " << distance[i]
             << " nodes away from node 1\n";
    return 0;
}
