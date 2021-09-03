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


int subsetSum(int arr[] , int N , int sum)
{

	if ( (N == 1 && arr[0] == sum) || (sum == 0 && N > 0) )
	{

		return 1;
	}
	else if ( N == 1 && arr[0] != sum )
	{
		return -1;
	}
	else

	{	if (arr[N - 1] <=  sum)
		{
			return  max( ( subsetSum(arr, N - 1, sum - arr[N - 1])), (subsetSum(arr, N - 1, sum)) );

		}
		else
		{
			return  subsetSum(arr, N - 1, sum);

		}

	}

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {2, 6, 11, 5};
	int N = sizeof(arr) / sizeof(arr[0]);
	int sum = 8;

	// rep(i, N + 1)
	// {
	// 	rep(j , sum + 1)
	// 	{
	// 		t[i][j] = -2;
	// 	}
	// }



	cout << subsetSum(arr, N , sum);

}