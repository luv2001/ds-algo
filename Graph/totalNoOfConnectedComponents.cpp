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

vector<int> temp;
vector<int> another;



void dfsOfGraph(int vertex , bool vis[] , vector<int> adj[])
{

	if (!vis[vertex])
	{
		vis[vertex] = true;

		temp.push_back(vertex);
		for (int child : adj[vertex])
		{
			dfsOfGraph(child , vis , adj);
		}
	}
}

void dfs(int vertex , vector<int> adj[], int m , bool vis[])
{
	dfsOfGraph(vertex , vis , adj );

	// cout << temp.size() << " " << endl;
	another.push_back(temp.size());
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

	int k = 0;

	bool vis[n + 1];
	rep(i, n)
	{
		vis[i] = false;
	}


	for (int i = 1 ; i <= n ; i++)
	{
		temp = {};
		if (!vis[i])
		{
			// cout << " i : " << i << endl;
			dfs(i , adj , m , vis);
			k++;
		}


	}



	if (n == 0 || m == 0)
	{
		cout << n;
	}
	else
	{
		cout << k << endl;

		if (k == 1) {cout << n;}
		else
		{	for (int i = 0 ; i < k ; i++)
			{
				cout << another[i] << " ";
			}
		}


	}





}


















