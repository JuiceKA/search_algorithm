#include<bits/stdc++.h>
using namespace std;

const int MaxN = 1 + 1e5;

int n;
bool mark[MaxN];
vector<int> adj[MaxN];

void BFS(){
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        mark[u] = 1;
        cout << u << " ";
        for(int v : adj[u])
        if(!mark[v]) q.push(v);
    }
}

int main(){
    cin >> n;
    for(int i = 0 ; i < n - 1 ; ++i){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS();

    return 0;
}
