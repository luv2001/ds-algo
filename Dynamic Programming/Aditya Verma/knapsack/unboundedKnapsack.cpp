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

Input: N = 4, W = 8
val[] = {1, 4, 5, 7}
wt[] = {1, 3, 4, 5}
Output: 11

Input: N = 2, W = 3
val[] = {1, 1}
wt[] = {2, 1}
Output: 3

*/

int knapSack(int N, int W, int val[], int wt[])
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
					t[i][j]  = max( val[i - 1] +  (t[i - 1 ][j - wt[i - 1]]) , (t[i - 1][j]) );
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}

	rep(i, N + 1)
	{
		rep(j, W + 1)
		{
			cout   << t[i][j] << " ";
		}
		cout << endl;
	}

	return t[N][W];


}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 3;
	int W = 7;
	int val[] = {1, 1, 1};
	int wt[] =  {5, 5, 2};

	cout << knapSack(N, W, val, wt);
}





