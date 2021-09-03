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
	// if sum is present in array return 0 oterwise return -1
	if ( (N == 1 && sum == arr[0]) || (N > 0 && sum == 0) )
	{
		return 1;
	}

	else if ( N == 1 && arr[0] != sum )
	{
		return -1;
	}
	else
	{
		if (arr[N - 1] <= sum)
		{
			return max( (isPresent(arr, sum - arr[N - 1], N - 1)) , (isPresent(arr, sum, N - 1)) );
		}
		else
		{
			return isPresent(arr, sum, N - 1);
		}
	}

}


int minimumSubsetSum(int arr[], int N)
{
	int sum = 0;
	rep(i, N) { sum = sum + arr[i]; }


	if (sum % 2 == 0)
	{
		rep(i, sum)
		{

		}
	}
	else
	{
		return 0;
		cout << "Odd wala code";
	}

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {2, 6, 11, 5};
	int arrSize = sizeof(arr) / sizeof(arr[0]);


	cout << minimumSubsetSum(arr , arrSize);
}