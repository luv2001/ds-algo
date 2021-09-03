#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int isPresent(int arr[], int sum, int N)
{
	int t[N + 1][sum + 1];

	rep(i, N + 1)
	{
		rep(j, sum + 1)
		{
			if (i == 1 && j == arr[0])
			{
				t[i][j] = 1;
			}
			else if (i == 1 && j != arr[0])
			{
				t[i][j] = -1;
			}
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j] = max( t[i - 1][j - arr[i - 1]] , t[i - 1][j]);
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}

	return t[N][sum];


}

int equalPartition(int arr[] , int N)
{
	int sum = 0;
	rep(i, N)
	{
		sum = sum  + arr[i];
	}

	if (sum % 2 != 0)
	{
		return -1;
	}
	else
	{
		return isPresent(arr, sum / 2, N);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {1, 5, 11, 5};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	equalPartition(arr, arrSize) == 1 ? cout << "YES" : cout << "NO";

}