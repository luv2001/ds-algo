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

void dfs(int i , int j , vector<vector<int>> &image , int parent)
{
	int m = image.size();
	int n = image[0].size();

	int newParent = image[i][j];


	if (i < 0 || j < 0 || i >= 3 || j >= 3) return;
	if (newParent > parent)
	{
		// cout << newParent << " " << parent << endl;


		dfs(i - 1, j, image, newParent);
		// dfs(i + 1, j, image, newParent);
		// dfs(i , j - 1, image, newParent);
		dfs(i , j + 1, image, newParent);
	}

}

void LongestPath(vector<vector<int>> &image)
{
	int m = image.size();
	int n = image[0].size();

	dfs(0, 0, image , -1);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> image;

	image = {
		{9, 10, 4}, {6, 6, 8} , {2, 1, 1}
	};

	LongestPath(image);

}


















