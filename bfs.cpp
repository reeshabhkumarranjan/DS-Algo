#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("file_name.in", "r", stdin);
    // freopen("file_name.out", "w", stdout);
    ll n, m, s, t;
    cin >> n >> m >> s >> t;
    s--; t--;
    vector<ll> adj[n];
    ll u, v;
    for (int i = 0; i < n; i++) {
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll dist[n];
    memset(dist, -1, sizeof(dist));
    queue<ll> q;
    q.push(s);
    dist[s] = 0;
    while (!q.empty()) {
        ll u = q.front(); q.pop();
        for (auto w : adj[u]) {
            if (dist[w] == -1) {
                dist[w] = dist[u] + 1;
                q.push(w);
            }
        }
    }
    cout << dist[t] << endl;
}
