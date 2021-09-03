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

length   | 1   2   3   4   5   6   7   8
--------------------------------------------
price    | 1   5   8   9  10  17  17  20

*/

int unboundedKnapsack(int wt[] , int val[] , int N, int W)
{
	int t[N + 1][W + 1];

	rep(i, N + 1)
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
					t[i][j] = max( val[i - 1] + t[i][j - wt[i - 1]] , t[i - 1][j] );
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}


	return t[N][W];
}

int maxProfit(int wt[] , int N , int val[])
{
	int W = wt[N - 1];

	cout << " W  : " << W << endl;
	return unboundedKnapsack(wt, val, N, W);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int length[]  = {1, 2, 3, 4, 5, 6, 7, 8};
	int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
	int N = sizeof(length) / sizeof(length[0]);

	cout << maxProfit( length , N , price );


}