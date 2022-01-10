#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;

bool dfs(int vertex, int par, vector<int> adj[], vector<bool> &vis)
{
	vis[vertex] = 1;
	bool res = false;
	for (int child : adj[vertex])
	{
		if (vis[child] && child == par)continue;
		if (vis[child])
			return true;
		res = res || dfs(child, vertex, adj, vis);

	}
	return res;

}
// Function to detect cycle in an undirected graph.
bool isCycle(int V, vector<int> adj[]) {
	vector<bool> vis(V, false);
	bool ans = false;
	for (int i = 0; i < V; i++)
	{

		if (!vis[i])
		{
			if (dfs(i, -1, adj, vis))
			{
				// cout << i << " ";
				ans = true;
				break;
			}
		}
	}
	return ans;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> adj[n];

	rep(i, m)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	cout << isCycle(n, adj);


}


















