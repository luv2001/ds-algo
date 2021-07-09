#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;




int knapSack(int W , int wt[], int val[] , int N)
{
	int t[N + 1][W + 1];

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= W; j++)
		{
			if (i == 0 || j == 0)
			{
				t[i][j] = 0;
			}
			else
			{
				if (wt[i - 1] <= j)
				{
					t[i][j] = max( (val[i - 1] + t[i - 1][W - wt[i - 1]]) , (t[i - 1][W]) );
				}
				else
				{
					t[i][j] = t[i - 1][W];
				}
			}
		}
	}



	return t[N][W];
}


int main()
{
	int val[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	int W = 50;
	int n = sizeof(val) / sizeof(val[0]);

	cout << knapSack(W, wt, val, n);

	return 0;
}