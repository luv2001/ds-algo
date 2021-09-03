#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

const unsigned int M = 1000000007;


int nCnCrDPmatrixrDP(int n, int r) // space complexity = O(n*r) Time = O(n*r)
{
	int t[n + 1][r + 1];

	rep(i, n + 1)
	{
		rep(j, r + 1)
		{
			if (j == 0 || j == i)
			{
				t[i][j] = 1;
			}
			else if (j > i)
			{
				t[i][j] = 0;
			}
			else
			{
				t[i][j] = ( (t[i - 1][j]) % M + (t[i - 1][j - 1]) % M  );
			}

		}
	}

	return t[n][r];
}

int nCrArray(int n, int r)
{
	int arr[r + 1];

	rep(i, r + 1)
	{
		if (i == 0)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}
	}

	while (r--)
	{
		cout << "OI" << " ";
	}


	return 46;

}
245098309
1245098316

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n = 212;
	int r = 169;

	// cout << nCrDPmatrix(n, r);
	cout << nCrArray(n, r);
}