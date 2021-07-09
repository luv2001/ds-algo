#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int t[1001][1001];


int nCr(int n, int r)
{

	int t[n + 1][r + 1];

	rep(i, n + 1)
	{
		rep(j, r + 1)
		{
			if (i == 0 || i < j)
			{
				t[i][j] = 0;
			}
			else if (j == 0 || i == j)
			{
				t[i][j] = 1;
			}
			else
			{
				t[i][j] = t[i - 1][j] + t[i - 1][j - 1];
			}
		}
	}

	return t[n][r];


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n = 10;
	int r = 3;

	cout << nCr(n, r);
}