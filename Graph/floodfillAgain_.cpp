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

// void dfs(vector<vector<int>>& image, int i, int j , int oldColor ,  int newColor)
// {
// 	int n = image.size();
// 	int m = image[0].size();

// 	if (i < 0 || j < 0 || i >= n || j >= m) return;

// 	image[i][j] = newColor;

// 	dfs(image, i, j, oldColor, newColor);

// }

// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
// {

// 	int oldColor = image[sr][sc];
// 	dfs(image, sr, sc, oldColor);

// 	dfs(image, sr, sc, oldColor, newColor);

// }


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// vector<vector<int>> image;
	// image.push_back({1, 1, 1});
	// image.push_back({1, 1, 0});
	// image.push_back({1, 0, 1});

	// floodFill(image, 1, 1, 2);


	vector<int> frag = {12, 3, 1, 2};

	auto it = frag.end() - 1;
	cout << *it;

}


















