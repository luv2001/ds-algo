#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using namespace std;
using ll = long long;


bool dfs(int vertex, vector<int> adj[] , bool vis[], int parent)
{
	vis[vertex] = true;
	// cout << vertex << " ";
	bool isLoopExist = false;

	for (auto child : adj[vertex])
	{
		if (child == parent) continue;
		if (vis[child]) return true;
		dfs(child , adj , vis , vertex);
	}

	return isLoopExist;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> adj[n + 1];

	rep(i, m)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bool vis[n + 1];

	rep(i, n + 1)
	{
		vis[i] = false;
	}

	bool isLoop = false;

	for (int i = 1; i <= n; i++)
	{
		if (dfs(i, adj, vis, -1))
		{
			isLoop = true;
			break;
		}
	}


	cout << isLoop << endl;

}


















