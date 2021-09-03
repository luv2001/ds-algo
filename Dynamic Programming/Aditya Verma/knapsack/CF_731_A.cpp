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


oi
7

1 1
3 3
2 2

2 5
2 1
2 3

1000 42
1000 1
1000 1000

1 10
3 10
2 10

3 8
7 8
3 7

2 1
4 1
1 1

1 344
1 10
1 1




*/


int d_X( int arr1[] , int arr2[] )
{
	return ((arr1[0] - arr2[0]) < 0 ? (arr2[0] - arr1[0]) : (arr1[0] - arr2[0])  ) ;
}

int d_Y( int arr1[] , int arr2[] )
{
	return ((arr1[1] - arr2[1]) < 1 ? (arr2[1] - arr1[1]) : (arr1[1] - arr2[1])  ) ;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int A[2], B[2], F[2];

		cin >> A[0] >> A[1] >> B[0] >> B[1] >> F[0] >> F[1];

		if ( ((d_X(A, F) != 0) && (d_Y(A, F) != 0) && (d_Y(B, F) != 0) && (d_Y(B, F) != 0)  )  && ( d_X(A, B) == 0 )  )
		{
			cout << d_Y(A, B) << endl;
		}

		else if ( ((d_X(A, F) != 0) && (d_Y(A, F) != 0) && (d_Y(B, F) != 0) && (d_Y(B, F) != 0)  )  && ( d_Y(A, B) == 0 )  )
		{
			cout << d_X(A, B) << endl;
		}

		else if ( d_X(A, B) == 0 && d_X(A, F) == 0 && d_X(F, B) == 0   )
		{
			if ( d_Y(A, F) + d_Y(F, B) == d_Y (A, B))
			{
				cout << d_Y(A, B) + 2 << endl;
			}
			else
			{
				cout << d_Y(A, B) << endl;
			}

		}

		else if ( d_Y(A, B) == 0 && d_Y(A, F) == 0 && d_Y(F, B) == 0   )
		{
			if ( d_X(A, F) + d_X(F, B) == d_X (A, B))
			{
				cout << d_X(A, B) + 2 << endl;
			}
			else
			{
				cout << d_X(A, B) << endl;
			}
		}

		else
		{
			cout << d_X(A, B) + d_Y(A, B) << endl;
		}


	}

}














