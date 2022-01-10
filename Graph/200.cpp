#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define push_back pb
using ll = long long;


using namespace std;
using ll = long long;

void dfs(int i, int j, vector<vector<char>>& grid )
{
	int m = grid.size();
	int n = grid[0].size();

	if (i < 0 || j < 0 || i >= m || j >= n) return;
	if (grid[i][j] != 1) return;

	// cout << "change i ,j " << i << " " << j  << endl;
	grid[i][j] = 2;

	dfs(i, j + 1 , grid);
	dfs(i, j - 1, grid);
	dfs(i - 1, j, grid);
	dfs(i + 1, j, grid);

}

int numIslands(vector<vector<char>>& grid)
{
	int ct = 0;


	int m = grid.size();
	int n = grid[0].size();

	rep(i, m)
	{
		rep(j, n)
		{
			if (grid[i][j] == 1)
			{
				ct++;
				dfs(i, j, grid);
			}
		}
	}

	return ct;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<char>> grid;
	grid = { {1, 1, 1, 1, 0} ,
		{1, 1, 0, 1, 0},
		{1, 0, 0, 0, 1},
		{0, 0 , 1 , 0, 1},
	};

	cout << numIslands(grid);


	// for (auto it : grid)
	// {
	// 	for (auto ut : it)
	// 	{
	// 		cout << int(ut) << " ";
	// 	}
	// 	cout << endl;
	// }

	// cout << endl << endl;

	// int ct = 0;

	// rep(i, m)
	// {
	// 	rep(j, n)
	// 	{
	// 		if (grid[i][j] == 1)
	// 		{
	// 			ct++;
	// 			// cout << "i, j : " << i << " " << j << endl;
	// 			dfs(i, j, grid);
	// 		}
	// 	}
	// }


	// for (auto it : grid)
	// {
	// 	for (auto ut : it)
	// {
	// 		cout << int(ut) << " ";
	// 	}
	// 	cout << endl;
	// }

	// cout << endl;

	// cout << numIslands(grid);





	// cout << ct;



}


















