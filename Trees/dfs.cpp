#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;

const int N = 1e5 + 10;

int height[N];


using namespace std;
using ll = long long;

int d[] = {};

void loop() {
	rep(i, 14)
	{
		d[i] = 0;
	}
}



void dfs( int vertex, vector<int> adj[] , int parent)
{
	cout << vertex << " ";

	for (int child : adj[vertex])
	{
		if (child == parent) continue;
		d[child] =  d[vertex] + 1;
		dfs(child , adj , vertex);
		height[vertex] = max( (height[vertex]), (height[child] + 1) );
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<int> adj[n + 1];

	rep(i, n - 1)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	loop();
	cout << 0 << " ";
	dfs(1, adj, 0);

	cout  << endl << endl;

	rep(i, 14)
	{
		cout << d[i] << " ";
	}

	cout << endl;
	rep(i, 14)
	{
		cout << height[i] << " ";
	}



}


















