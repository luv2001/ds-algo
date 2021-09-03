#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int variable__lala = 0;

int targetSum(int arr[], int N , int sum )
{
	if (N == 0 && sum == 1)
	{
		variable__lala++;
		return 1;
	}
	else if (N == 0 && sum != 1)
	{

		return -1;
	}
	else
	{
		return max( (targetSum(arr, N - 1 , sum + arr[N - 1])) , (targetSum(arr, N - 1 , sum - arr[N - 1])) );
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {1};
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;

	targetSum(arr, arrSize, sum);
	cout << variable__lala << endl;


}