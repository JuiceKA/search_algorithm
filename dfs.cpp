#include<bits/stdc++.h>
using namespace std;

const int MaxN = 1 + 1e5;

int n;
bool mark[MaxN];
vector<int> adj[MaxN];

void DFS(int u){
    cout << u << " ";
    mark[u] = 1;
    for(int v : adj[u])
    if(!mark[v]) DFS(v);
}

int main(){
    cin >> n;
    for(int i = 0 ; i < n - 1 ; ++i){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1);

    return 0;
}
