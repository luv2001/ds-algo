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

vector<int> bfsOfGraph(int n, vector<int> adj[])
{
	vector<int> bfs;
	vector<int> vis;

	rep(i, n + 1)
	{
		vis.push_back(0);
	}

	queue<int> q;
	q.push(1);
	vis[1] = 1;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		bfs.push_back(node);

		for (auto it : adj[node])
		{
			if (!vis[it])
			{
				q.push(it);
				vis[it] = 1;
			}
		}
	}



	return bfs;
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

	vector<int> bfs = bfsOfGraph(n, adj);

	for (auto it : bfs)
	{
		cout << it << " ";
	}

}


















