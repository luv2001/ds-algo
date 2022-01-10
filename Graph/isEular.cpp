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

vector<int> vectorThat;


bool dfs(int vertex , vector<int> adj[] , bool vis[], int parent)
{
	bool isEular = false;
	if (!vis[vertex])
	{
		vis[vertex] = true;

		vectorThat.push_back(vertex);

		for (int child : adj[vertex])
		{

			if (child == parent) continue;
			if (vis[child] && child == 0)
			{
				cout << "true " << vertex << endl;
				isEular = true;
				return isEular;
			}

			isEular = isEular || dfs(child , adj , vis, vertex);
		}
	}

	return isEular;
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
	rep(i, n) {
		vis[i] = false;
	}

	cout << dfs(0, adj, vis, -1) << endl;


	for (auto it : vectorThat)
	{
		cout << it << " ";
	}





}


















