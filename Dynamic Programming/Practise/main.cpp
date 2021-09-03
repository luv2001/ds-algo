#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int t[1001][1001];


int knapSack(int W, int wt[] , int val[] , int N)
{

	// if (W == 0 || N == 0)
	// {
	// 	return 0;
	// }
	// else if (t[N][W] != -1)
	// {
	// 	return t[N][W];
	// }
	// else
	// {
	// 	if (W < wt[N - 1])
	// 	{
	// 		t[N][W] = knapSack(W, wt, val, N - 1);

	// 	}
	// 	else
	// 	{
	// 		t[N][W] =  max( (wt[N - 1] + knapSack(W - wt[N - 1] , wt, val, N - 1)) , (knapSack(W, wt, val, N - 1)));
	// 	}
	// 	return t[N][W];
	// }





	rep(i, N + 1)
	{
		rep(j, W + 1)
		{
			if (i == 0 && j == 0)
			{
				t[i][j] = 0;
			}
			else
			{
				if (W < wt[i - 1])
				{
					t[i][j] = knapSack(W, wt, val, i - 1);
				}
				else
				{
					t[i][j] = max( (wt[i - 1] + knapSack(W - wt[i - 1] , wt, val, i - 1)) , (knapSack(W, wt, val, i - 1)));
				}
			}
		}
	}

	return t[N][W];



}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 4;
	int W = 4;
	int val[] = {1, 2, 3 , 14};
	int wt[] = {4, 5, 1 , 1};



	cout << knapSack(W, wt, val, N);
}