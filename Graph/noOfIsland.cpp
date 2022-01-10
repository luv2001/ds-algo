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



int numIslands(vector<vector<int>>& grid)
{
	int ct = 0;

	int m = grid.size();
	int n = grid[0].size();


	int newColor = 2;


	int initialColor = 1;
	dfs(0, 0, initialColor , newColor , grid);


	return ct;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> grid;
	grid = { {1, 1, 1, 1, 0} ,
		{1, 1, 0, 1, 0},
		{1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0},
	};


	cout << numIslands(grid);

	cout << endl << endl;

	for (auto it : grid)
	{
		for (auto ut : it)
		{
			cout << ut << " ";
		}
		cout << endl;
	}


}


















