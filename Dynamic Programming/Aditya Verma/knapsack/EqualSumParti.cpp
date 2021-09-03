#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;



int subsetSum(int arr[], int W, int n)
{
	int t[n + 1][W + 1];
	rep(i, n + 1)
	{
		rep(j, W + 1)
		{
			if ( (i == 1 && arr[i - 1] == j) || ( j == 0 && (i > 0) )  )
			{
				t[i][j] = 1;
			}
			else if (i == 1 && arr[i - 1] != j)
			{
				t[i][j] = 0;
			}
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j] =   max( ( t[i - 1][j - arr[i - 1]] ) , ( t[i - 1][j] ) );
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


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int W = 19;
	int arr[] = {1, 5, 11, 5, 1};


	int n = sizeof(arr) / sizeof(arr[0]);

	W = 0;
	rep(i, n)
	{
		W = W + arr[i];
	}

	if (W % 2 != 0)
	{
		cout << "false";
	}
	else
	{
		W = W / 2;
		subsetSum(arr, W, n) == 1 ? cout << "true" : cout << "false";
	}




}