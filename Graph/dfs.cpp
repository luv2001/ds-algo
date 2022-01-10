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

void dfs(int node , vector<int> &vis , vector<int> adj[], vector<int> &storeDfs)
{
	storeDfs.push_back(node);
	vis[node] = 1;
	for (auto it : adj[node])
	{
		if (!vis[it])
		{
			dfs(it, vis, adj, storeDfs);
		}
	}
}

vector<int> dfsOfGraph(int n , vector<int> adj[])
{
	vector<int> storeDfs ;
	vector<int> vis(n + 1, 0);

	for (int i = 1; i <= n ; i++)
	{
		if (!vis[i])
		{
			dfs(i, vis, adj, storeDfs);
		}
	}

	return storeDfs;
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

	vector<int> dfs =  dfsOfGraph(n, adj);
	for (auto it : dfs)
	{
		cout << it << " ";
	}
}


















