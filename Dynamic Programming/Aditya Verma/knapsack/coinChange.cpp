#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;


int countSubsetSum(int N , int S[], int m)
{
	int t[m + 1][N + 1];

	rep(i, m + 1)
	{
		rep(j, N + 1)
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
				if (S[i - 1] <= j)
				{
					t[i][j] = t[i][j - S[i - 1]] + t[i - 1][j];
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}



	return t[m][N];
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 10;
	int S[] = {2, 5, 3, 6};
	int m = 4;

	cout << countSubsetSum(N, S, m);
}