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

bool dfs(int vertex , vector<int> adj[] , bool vis[], int parent)
{
	vis[vertex] = true;
	bool isLoopExist = false;

	// cout << vertex << " " << parent << endl;
	for (int child : adj[vertex])
	{
		if (vis[child] && child == parent) continue;
		if (vis[child]) return true;
		isLoopExist = isLoopExist ||  dfs(child , adj , vis , vertex);
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

	vector<int> adj[n];

	rep(i, m)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bool vis[n];
	rep(i, n)
	{
		vis[i] = false;
	}




	bool loop = false;

	rep(i, n)
	{
		if (!vis[i])
		{
			if (dfs(i, adj, vis, -1))
			{
				cout << i << endl;
				loop = true;
				break;
			}
		}

	}




	cout << loop;








}


















