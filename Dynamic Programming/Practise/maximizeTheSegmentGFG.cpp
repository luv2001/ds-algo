#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

/*

N = 4
x = 2, y = 1, z = 1

*/

int knapsack(int wt[] , int val[] , int n , int W)
{
	int t[n + 1][W + 1];

	rep(i, n + 1)
	{
		rep(j, W + 1)
		{
			if (i == 0 || j == 0)
			{
				t[i][j] = 0;
			}
			else
			{
				if (wt[i - 1] <= j)
				{
					t[i][j] =  max( val[i - 1] +  t[i][j - wt[i - 1]] , t[i - 1][j] );
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}

	return t[n][W];
}

int maximizeTheCuts(int n, int x, int y, int z)
{
	int val[3] = {1, 1, 1};
	int wt[3] = {x, y, z};
	int W = n;


	int ans =  knapsack(wt, val, 3, W);
	return ans;


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 7;
	int X = 5 , Y = 5 , Z = 2;

	cout << maximizeTheCuts(N, X, Y, Z);


}