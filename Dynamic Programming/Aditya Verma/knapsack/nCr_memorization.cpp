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


	if (n < r || n < 0 || r < 0 )
	{
		return 0;
	}
	else if (t[n][r] != -1)
	{

		return  t[n][r];
	}
	else
	{	if ( n == r)
		{

			t[n][r] = 1;

		}
		else
		{
			t[n][r] = nCr(n - 1, r) + nCr(n - 1, r - 1);
		}

		return  t[n][r];


	}





}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n = 10;
	int r = 3;
	rep(i, n + 1)
	{
		rep(j, r + 1)
		{
			t[i][j] = -1;
		}
	}



	cout << nCr(n, r);
}