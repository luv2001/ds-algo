#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

// lletcode 322

/*

Input: coins = [1,2,5], amount = 11

*/

int minumCoinChange(int arr[] , int N , int amount)
{
	int t[N + 1][amount + 1];

	rep(i, N + 1)
	{
		rep(j, amount + 1)
		{
			if (i == 0)
			{
				t[i][j] = INT_MAX - 1;
			}
			else if ( i > 0 && j == 0 )
			{
				t[i][j] = 0;
			}
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j] =  min ( (1 + t[i][j - arr[i - 1]])  , t[i - 1][j] );
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}


	return t[N][amount];
}

int coinChange(vector<int>& coins, int amount)
{
	int arr[coins.size()];
	rep(i, coins.size())
	{
		arr[i] = coins[i];
	}

	int N = coins.size();

	return minumCoinChange(arr, N, amount);
}

int minCoins(int arr[], int N, int amount)
{

	if (N == 1)
	{
		if (amount % arr[0] == 0)
		{
			return amount / arr[0];
		}
		else
		{
			return -1;
		}

	}
	else
	{
		int t[N + 1][amount + 1];

		rep(i, N + 1)
		{
			rep(j, amount + 1)
			{
				if (i == 0)
				{
					t[i][j] = INT_MAX - 1;
				}
				else if ( i > 0 && j == 0 )
				{
					t[i][j] = 0;
				}
				else
				{
					if (arr[i - 1] <= j)
					{
						t[i][j] =  min ( (1 + t[i][j - arr[i - 1]])  , t[i - 1][j] );
					}
					else
					{
						t[i][j] = t[i - 1][j];
					}
				}
			}
		}


		if (t[N][amount] == INT_MAX - 1)
		{
			return -1;
		}
		else
		{
			return t[N][amount];
		}
	}
}






int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	std::vector<int> coins = {1, 2, 5};
	int amount = 11;

	cout << coinChange(coins, amount);


}














