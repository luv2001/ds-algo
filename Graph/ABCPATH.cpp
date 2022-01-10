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

void dfsPath(vector<vector<char>> &image , int i, int j , int parent)
{
	int m = image.size();
	int n = image[0].size();

	if (i < 0 || j < 0 || i >= m || j >= n) return;

	if (int(parent) - int(image[i][j]) != -1 ) return;
	char newParent = image[i][j];

	dfsPath(image , i , j , newParent);

}

void dfs(vector<vector<char>> &image , int i, int j)
{
	int parent = 'A';
	dfsPath(image , i, j , parent);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int H, W;

	cin >> H >> W;

	vector<vector<char>> image;

	rep(i, H)
	{
		vector<char> newLine = {};
		rep(j, W)
		{
			char ch;
			cin >> ch;
			newLine.push_back(ch);
		}
		image.push_back(newLine);
	}



	rep(i, H)
	{
		rep(j, W)
		{
			if (image[i][j] == 'A')
			{
				dfs(image, i, j);
			}
		}
	}



}


















