#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

const int MAXN = 1e5 + 5;

vector<vector<ii>> adj;
int dist[MAXN], pred[MAXN];
bitset<MAXN> memo;

bool dj(int s, int t)
{
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	fill(dist, dist+t+1, INT_MAX);

	pq.push(ii(0, s));
	dist[s] = 0; pred[s] = -1;

	while(!pq.empty()) {
		int u = pq.top().second; pq.pop();

		if(u == t) return true;
		memo[u] = true;

		for(auto &pr : adj[u]) {
			int v = pr.first, w = pr.second;
			if(!memo[v] && dist[u] + w < dist[v]) {
				dist[v] = dist[u] + w;
				pq.push(ii(dist[v], v));
				pred[v] = u;
			}
		}
	}

	return false;
}

int main()
{
	int n, m; cin >> n >> m;
	adj.resize(n+5);

	int u, v, w;

	while(m--) {
		cin >> u >> v >> w;
		adj[u].push_back(ii(v, w));
		adj[v].push_back(ii(u, w));
	}

	if(dj(1, n)) {
		vector<int> path;
		auto p = n;

		while (p != 1) {
			path.push_back(p);
			p = pred[p];
		} 

		path.push_back(1);
		reverse(path.begin(), path.end());

		for (size_t i = 0; i < path.size(); ++i)
			cout << path[i] << (i + 1 == path.size() ? "\n" : " ");
	}
	else cout << "-1" << "\n";

	return 0;
}
