#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int count_no = 0;


int subsetSum(int arr[], int W, int n)
{

	if (W == 0 && (n > 0))
	{
		count_no++;
		return 1;
	}
	else if ((n == 1 && arr[n - 1] == W) )
	{
		count_no++;
		return 1;
	}
	else if ( n == 1 && arr[n - 1] != W)
	{

		return -1;
	}

	else
	{
		if (arr[n - 1] <=  W)
		{
			return max( (subsetSum(arr, W - arr[n - 1], n - 1)), (subsetSum(arr, W, n - 1)) );
		}
		else
		{
			return subsetSum(arr, W, n - 1);
		}
	}


}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int W = 10;
	int arr[] = {1, 2, 3, 4, 5};


	int n = sizeof(arr) / sizeof(arr[0]);

	subsetSum(arr, W, n);

	cout << count_no << endl;


}