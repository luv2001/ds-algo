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

void dfs(int initialColor, int i, int j, vector<vector<int>>& image , int newColor)
{
	int m = image.size();
	int n = image[0].size();

	if (i < 0 || j < 0) return;
	if (i >= m || j >= n) return;
	if (image[i][j] != initialColor) return;

	image[i][j] = newColor;

	dfs(initialColor , i - 1, j , image , newColor);
	dfs(initialColor, i + 1, j, image , newColor);
	dfs(initialColor, i  , j - 1, image , newColor);
	dfs(initialColor, i , j + 1, image , newColor);

}

void floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
{
	int initialColor = image[sr][sc];


	dfs(initialColor, sr, sc, image, newColor);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<vector<int>> image;
	image = { {1, 1, 1, 1, 0} ,
		{1, 1, 0, 1, 0},
		{1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0},
	};



	for (auto it : image)
	{
		for (auto ut : it)
		{
			cout << ut << " ";
		}
		cout << endl;
	}


}


















