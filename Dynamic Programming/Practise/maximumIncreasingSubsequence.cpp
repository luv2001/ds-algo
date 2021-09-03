#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;


int maximumIS(int arr[] , int N , int currentSum , int currentNumber)
{
	int runningCurrentNo = arr[N - 1];
	cout << "runningCurrentNo : " << runningCurrentNo << endl;
	if (N == 0)
	{
		cout << "currentSum : " << currentSum << endl;
		return currentSum;
	}
	else
	{
		if (currentNumber <= runningCurrentNo)
		{
			cout << "if : currentNumber : " << currentNumber << endl;
			return max( maximumIS(arr, N - 1, currentSum + arr[N - 1] , arr[N - 1]) , maximumIS(arr, N - 1, currentSum , currentNumber) );
		}
		else
		{
			return maximumIS(arr, N - 1, currentSum  , currentNumber);

		}
	}
}

int maximumSumIncreasingSubseq(int arr[] , int N)
{
	int currentSum = 0;
	int currentNumber = arr[N - 1];

	return maximumIS(arr, N, currentSum , currentNumber);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {1, 101, 2, 3, 100};
	int N = sizeof(arr) / sizeof(arr[0]);


	cout << maximumSumIncreasingSubseq(arr, N );

}