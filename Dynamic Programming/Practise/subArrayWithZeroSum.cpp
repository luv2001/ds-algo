#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int isPresent(int arr[] , int n , int sum)
{
	int t[n + 1][sum + 1];

	rep(i, n + 1)
	{
		rep(j, sum + 1)
		{
			if (j == 0)
			{
				t[i][j] = 1;
			}
			else if (i == 0 && j > 0)
			{
				t[i][j] = 0;
			}
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j]  = max( t[i - 1][j - arr[i - 1]] , t[i - 1][j] );
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}

	rep(i, n + 1)
	{
		rep(j, sum + 1)
		{
			cout << t[i][j] << " ";
		}
		cout << endl;
	}


	return t[n][sum];
}

bool subArrayExists(int arr[], int n)
{
	int sum = 0;
	// rep(i, n) { sum = sum + arr[i]; }
	return isPresent(arr, n, sum);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {1, -2, -3, -4, -5, -3};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	subArrayExists(arr, arrSize) == 1 ? cout << "YES" : cout << "NO";
}