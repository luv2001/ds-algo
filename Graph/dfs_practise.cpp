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




vector<int> answerinFunction;
// bool vis[7];

void dfs(int vertex , vector<int> adj[] , bool vis[])
{
	if (!vis[vertex]) {
		vis[vertex] = true;
		answerinFunction.push_back(vertex);
		// cout << vertex << endl;
		for (int child : adj[vertex])
		{
			// cout << "parent : " << vertex << "child : " << child << endl;
			dfs(child , adj , vis);
		}
	}
}

vector<int> dfsOfGraph(int V , vector<int> adj[])
{
	int root = -4;
	for (auto it : adj[1])
	{
		if (root > 0)
		{
			break;
		}
		else
		{
			root = it;
		}

	}
	bool vis[V + 1];

	rep(i, V)
	{
		vis[i] = false;
	}



	dfs(root,  adj , vis);
	return answerinFunction;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m, n;
	cin >> n >> m;

	vector<int> adj[n + 1];

	rep(i, m)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}


	int root = -5;



	vector<int> ansDFS =  dfsOfGraph(m, adj);

	for (int print : ansDFS)
	{
		cout << print << " " ;
	}


}





