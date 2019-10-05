#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;
vector<int> adj[MAX];
bool visited[MAX];

void dfs (int root) {
	visited[root] = 1;
	
	for (const int& child : adj[root]) {
		if (!visited[child]) {
			dfs(child);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);

	int V, E;
	cin >> V >> E;
	
	for (int i = 0, u, v; i < E; ++i) {
		cin >> u >> v; --u; --v;
		adj[u].push_back(v);
		// adj[v].push_back(u); // For bidirectional edges
	}
	
	memset(visited, 0, sizeof(visited));
	int root = 0;
	dfs(root);
	
	return 0;
}
