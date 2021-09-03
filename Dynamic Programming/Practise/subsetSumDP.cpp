#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;




int subsetSum(int arr[] , int N , int sum)
{

	// int arr_sum = 0;

	// rep(i, N)
	// {
	// 	arr_sum = arr_sum + arr[i];
	// }
	// // cout << "arr_sum : " << arr_sum << endl;
	// sum = (sum + arr_sum) / 2;

	// cout << "sum : " << sum << endl;

	int t[N + 1][sum + 1];

	rep(i, N + 1)
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
				if ((arr[i - 1] <= j))
				{
					t[i][j] = ( ( t[i - 1][ j - arr[i - 1]]) +  ( t[i - 1][ j ]) );
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}


			}


		}
	}

	rep(i, N + 1)
	{
		rep(j, sum + 1)
		{
			cout << t[i][j] << " ";
		}
		cout << endl;
	}


	return t[N][sum];

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


// [0,0,0,0,0,0,0,0,1]
// 1

	int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 1};
	int N = sizeof(arr) / sizeof(arr[0]);
	int sum = 1;




	cout << subsetSum(arr, N, sum);



}