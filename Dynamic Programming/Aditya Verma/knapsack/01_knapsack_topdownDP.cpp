#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;





int knapSack(int W, int wt[], int val[] , int N)
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
			else if (wt[i - 1]  < j)
			{
				t[i][j] =  max( (val[i - 1] + t[i - 1][j - wt[i - 1]]) , (t[i - 1][j]) );
			}
			else
			{
				t[i][j]  = t[i - 1][j];
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