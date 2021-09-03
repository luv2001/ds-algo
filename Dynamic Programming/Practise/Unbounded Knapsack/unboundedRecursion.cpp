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

Input : W = 8
       val[] = {10, 40, 50, 70}
       wt[]  = {1, 3, 4, 5}
Output : 110
*/

int unboundedKnapsack(int val[] , int wt[] , int W, int N)
{
	if (N == 0 || W == 0)
	{
		return 0;
	}
	else
	{
		if (wt[N - 1] <= W)
		{
			return max( (val[N - 1] + unboundedKnapsack(val, wt, W - wt[N - 1], N - 1)) , (unboundedKnapsack(val, wt, W, N - 1)) );
		}
		else
		{
			return unboundedKnapsack(val, wt, W, N - 1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int W = 4;
	int val[] = {1, 1, 1};
	int wt[] = {2, 1, 1};
	int N = sizeof(val) / sizeof(val[0]);

	cout << unboundedKnapsack(val, wt, W, N);
}




