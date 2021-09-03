#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int t[1002][1002];

int subsetSum(int arr[], int W, int n)
{

	if (t[n][W] != -1)
	{
		return t[n][W];
	}
	else if ( (n == 1 && arr[n - 1] == W) || ( W == 0 && (n > 0) ) )
	{
		return 1;
	}
	else if (n == 1 && arr[n - 1] != W)
	{
		return -1;
	}
	else
	{
		if (arr[n - 1] <= W)
		{
			t[n][W] =  max( (subsetSum(arr, W - arr[n - 1], n - 1)) , (subsetSum(arr, W, n - 1)) );
		}
		else
		{
			t[n][W] = subsetSum(arr, W, n - 1);
		}
		return t[n][W];
	}

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int W = 91;
	int arr[] = {10, 1, 4, 3 , 7 , 2, 2};

	rep(i, 1002)
	{
		rep(j, 1002)
		{
			t[i][j] = -1;
		}
	}

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << subsetSum(arr, W, n);


}