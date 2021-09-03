#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

/*


LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3.
LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4.

*/



int lcs(char X[], char Y[] , int m , int n)
{



	int t[m + 1][n + 1];


	rep(i, m + 1)
	{
		rep(j, n + 1)
		{
			if (i == 0 || j == 0)
			{
				t[i][j] = 0;
			}
			else if ( X[i - 1] == Y[j - 1])
			{

				t[i][j] = 1 + t[i - 1][j - 1];
			}
			else
			{
				// t[i][j] = max( t[i - 1][j] , t[i][j - 1] );
				t[i][j] = 0 ;
			}
		}
	}

	rep(i, m + 1)
	{
		rep(j, n + 1)
		{
			cout << t[i][j] << " ";
		}
		cout << endl;
	}

	int maxElement = INT_MIN;

	rep(i, m + 1)
	{
		rep(j, n + 1)
		{
			if (maxElement < t[i][j])
			{
				maxElement = t[i][j];
			}
		}
	}

	int  j_vari;

	rep(i, m + 1)
	{
		rep(j, n + 1)
		{
			if (t[i][j] == maxElement)
			{
				j_vari = j;
				cout << " i : " << i << " j : " << j << endl;
				cout << " X[i] : " << X[i - 1] << " Y[j] : " << Y[j - 1] << endl;
			}
		}
	}

	for (int i = j_vari - maxElement; i < j_vari ; i++)
	{
		cout << Y[i];
	}
	cout << endl;

	return maxElement;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char X[] = "UIBCYEIKIMPOASAD";
	char Y[] = "ABCYEIOIMPOASAD";

	int m = strlen(X);
	int n = strlen(Y);

	cout << lcs( X, Y, m, n );

	return 0;
}