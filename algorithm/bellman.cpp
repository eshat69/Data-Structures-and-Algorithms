#include<bits/stdc++.h>
using namespace std ;
const int INF=1e9;
int main (){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edge;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >>u>>v>>w;
        edge.push_back({u,v,w});
    }
    int src;
    cin>>src;
    vector<int> dist(n,INF);
    dist[src]=0;
    for(int i=0; i<n-1;i++){
        for(auto it : edge){
            int u = it[0];
            int v = it[1];
            int w = it[2];
            dist[v]=min(dist[v],w+dist[u]);
        }
    }
    for(auto it : dist){
        cout<<it<<" ";
    }
    return 0 ;
}
/*5 8
1 2 3
3 2 5
1 3 2
3 1 1
1 4 2
0 2 4
4 3 -3
0 1 -1
0 */
