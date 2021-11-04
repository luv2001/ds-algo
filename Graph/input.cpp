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


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	// int adj[n + 1][n + 1];

	// rep(i, n + 1)
	// {
	// 	rep(j, n + 1)
	// 	{
	// 		adj[i][j] = 0;
	// 	}
	// }

	// for (int i = 0 ; i < m; i++)
	// {
	// 	int u, v;
	// 	cin >> u >> v;

	// 	adj[u][v] = 1;
	// 	adj[v][u] = 1;
	// }

	// rep(i, n + 1)
	// {
	// 	rep(j, n + 1)
	// 	{
	// 		cout << adj[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	vector<int> adj[n + 1];

	rep(i, m)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	rep(i, n + 1)
	{
		for (auto it : adj[i])
		{
			cout << it << " ";
		}
		cout << endl;
	}

}


















